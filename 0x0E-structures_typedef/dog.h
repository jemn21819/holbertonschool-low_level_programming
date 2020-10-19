#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: char type name of dog
 * @age: float type age of dog
 * @owner: char type owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* 1-init_dog.c */
void init_dog(struct dog *d, char *name, float age, char *owner);


/* 2-print_dog.c */
void print_dog(struct dog *d);


/* 4-new_dog.c */
dog_t *new_dog(char *name, float age, char *owner);


/* 5-free_dog.c */
void free_dog(dog_t *d);

#endif
