#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - a function that duplicates strings
 * @str: string to be used
 * Return: null if str = null
 * on success of _strup return duplicate string
 */
char *_strdup(char *str)
{
char *dup; /*duplicate*/

if (str == NULL)
return (NULL);
dup = (char *)malloc(strlen(str) + 1);/* allocate memory*/
if (dup == NULL)/*insufficient memory*/
return (NULL);
strcpy(dup, str);/*copy str*/
return (dup);
}
