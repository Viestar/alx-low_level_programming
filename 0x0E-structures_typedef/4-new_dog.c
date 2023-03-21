#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog called poppy of struct dog_t.
 * @name: Poppy's name.
 * @age: Poppy's age.
 * @owner: Poppy's owner.
 * Return: Poppy struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Creating an instance of the dog */
	dog_t *poppy;

	/* Checking if any data has been passed */
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* Allocating memory for the struct */
	poppy = malloc(sizeof(dog_t));

	/* Checking if any memory was allocated */
	if (poppy == NULL)
		return (NULL);

	/* Allocating memory for the poppy name*/
	(*poppy).name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*poppy).name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	/* Allocating memory for the poppy owner */
	(*poppy).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*poppy).owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}

	(*poppy).name = strcpy(poppy->name, name);
	(*poppy).age = age;
	(*poppy).owner = strcpy(poppy->owner, owner);

	return (poppy);
}
