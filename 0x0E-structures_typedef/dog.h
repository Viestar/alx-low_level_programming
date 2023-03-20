#ifndef DOG_H
#define DOG_H

/**
 * File: dog.h
 * Desc: Header file that defines declares a struct dog with name, age and owner
 */

/**
 * struct dog - All about the dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
