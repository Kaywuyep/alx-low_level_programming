#include "main.h"

void close_elf(int elf);

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		perror("Error closing file");
		exit(98);
	}
}

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success, 1 on invalid arguments, 98 on errors.
 */
int main(int argc, char *argv[])
{
	int fd, i;
	ssize_t n;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <ELF file>\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	n = read(fd, &header, sizeof(Elf64_Ehdr));
	if (n == -1)
	{
		perror("Error reading file");
		close_elf(fd);
		return (98);
	}

	/*Check if it's a valid ELF file*/
	if (n != sizeof(Elf64_Ehdr) ||
			header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close_elf(fd);
		return (98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	if (header.e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("Class: ELF32\n");
	}
	else
	{
		printf("Class: ELF64\n");
	}
	if (header.e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("Data: 2's complement, little-endian\n");
	}
	else
	{
		printf("Data: 2's complement, big-endian\n");
	}
	printf("Version: %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
			break;
	}
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_type);
			break;
	}
	printf("  Entry point address: %#lx\n", (unsigned long)header.e_entry);

	close_elf(fd);
	return (0);
}
