#ifndef DOG_H
#define DOG_H

/*
 * File: dog struct with diff data types.
 * Description: Header file that defines declares a
 * struct dog with name, age & owner
 */

/**
 * struct dog - All about the dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Description: things about a dog with different data types.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Assigns a nickname dog_t to the dog struct.
 */

typedef struct dog dog_t;


/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
