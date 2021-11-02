#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - struct
 *@name : name dog
 *@owner : owner dog
 *@age : age dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* MAIN_H */
