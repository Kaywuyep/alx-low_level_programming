#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *ptr1; /*new pointer*/
unsigned int size;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
ptr = malloc(new_size);

if (new_size == old_size)
return (ptr);

ptr1 = malloc(new_size);
if (ptr1 != NULL)
size = ((new_size > old_size) ? old_size : new_size);
memcpy(ptr1, ptr, size);
free(ptr);

return (ptr1);
}
