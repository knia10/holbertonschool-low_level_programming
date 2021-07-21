#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - new type for struct dog.
 */

typedef struct dog dog_t;

/**
 * struct dog - origin struct.
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 */

struct dog

{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
