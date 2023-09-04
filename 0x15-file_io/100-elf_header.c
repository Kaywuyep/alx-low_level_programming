#include "main.h"

/**
 * print_elf_magic - Print the ELF magic bytes.
 * @header: ...
 */
void print_elf_magic(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
}

/**
 * print_elf_class - Print the ELF class (32-bit or 64-bit)
 * @header: ...
 */
void print_elf_class(const Elf64_Ehdr *header)
{
	if (header->e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("Class: ELF32\n");
	}
	else
	{
		printf("Class: ELF64\n");
	}
}

/**
 * print_elf_data - Print the ELF data encoding (endianess)
 * @header: ...
 */
void print_elf_data(const Elf64_Ehdr *header)
{
	if (header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf("Data: 2's complement, little-endian\n");
	}
	else
	{
		printf("Data: 2's complement, big-endian\n");
	}
}
/**
 * print_elf_version - Print the ELF version.
 * @header: ...
 */
void print_elf_version(const Elf64_Ehdr *header)
{
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
}

/**
 * print_elf_osabi - Print the ELF OS/ABI.
 * @header: ...
 */
void print_elf_osabi(const Elf64_Ehdr *header)
{
	if (header->e_ident[EI_OSABI] == ELFOSABI_SYSV)
	{
		printf("OS/ABI: UNIX - System V\n");
	}
	else
	{
		printf("OS/ABI: Unknown\n");
	}
}

/**
 * print_elf_abi_version - Print the ELF ABI Version.
 * @header
 */
void print_elf_abi_version(const Elf64_Ehdr *header)
{
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - Print the ELF type (e.g., Executable).
 * @header: ...
 */
void print_elf_type(const Elf64_Ehdr *header)
{
	printf("Type: %s\n", (header->e_type == ET_EXEC) ? "Executable" : "Unknown");
}

/**
 * print_elf_entry_point - Print the ELF entry point address.
 * @header: ...
 */
void print_elf_entry_point(const Elf64_Ehdr *header)
{
	printf("Entry point: 0x%lx\n", (unsigned long)header->e_entry);
}
/**
 * main - entry point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		return (98);
	}

	/*Check if it's a valid ELF file*/
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	/*Print ELF header information using smaller functions*/
	print_elf_magic(&header);
	print_elf_class(&header);
	print_elf_data(&header);
	print_elf_version(&header);
	print_elf_osabi(&header);
	print_elf_abi_version(&header);
	print_elf_type(&header);
	print_elf_entry_point(&header);

	close(fd);

	return (0);
}
