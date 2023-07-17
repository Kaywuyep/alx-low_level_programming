#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - ...
 * @name: ..
 * @age:..
 * @owner: ...
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);/*if memory allocation fails*/
}
/*Allocate memory for name and owner strings*/
newDog->name = malloc(strlen(name) + 1);
newDog->owner = malloc(strlen(owner) + 1);
if (newDog->name == NULL || newDog->owner == NULL)
{
free(newDog->name);
free(newDog->owner);
free(newDog);
return (NULL);/*if memory allocation fails*/
}
/*Copy name and owner strings*/
strcpy(newDog->name, name);
strcpy(newDog->owner, owner);
newDog->age = age;

return (newDog);
}
