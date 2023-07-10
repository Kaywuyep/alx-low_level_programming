#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count words in a str
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
int flag, c, w;
flag = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}
return (w);
}
/**
 *strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;
while (*(str + len))/*calculate length of str*/
len++;
words = count_word(str);/*count num of words*/
if (words == 0)/*no words return null*/
return (NULL);
/*allocate memory for matrix(array of string)*/
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)/*failed allocation*/
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)/*If characters were found before this space or end of string*/
{
end = i;
/*Allocate memory for a new word*/
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)/*failed allocation*/
return (NULL);
/* Copy the characters of the word into the new memory*/
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;/*assign startin address of new word*/
k++;
c = 0;
}
}
else if (c++ == 0)/*If a char is found and the first char*/
start = i;/*store starting address*/
}
matrix[k] = NULL;/*assign null to last element*/
return (matrix);
}
