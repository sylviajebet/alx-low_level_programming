#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - A type with the elements name, age and owner
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
