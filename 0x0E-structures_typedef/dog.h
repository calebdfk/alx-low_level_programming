#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_l - typedef for struct dog
 */
typedef struct dog dog_l;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_l *new_dog(char *name, float age, char *owner);
void free_dog(dog_l *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
