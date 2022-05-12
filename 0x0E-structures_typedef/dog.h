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
typedef struct dog dog_pop;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_pop *new_dog(char *name, float age, char *owner);
void free_dog(dog_pop *d);
#endif
