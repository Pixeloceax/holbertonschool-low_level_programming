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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* MAIN_H */
