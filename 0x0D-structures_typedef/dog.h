#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog - dog types
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: defines dog types
 */
struct dog
{
	char * name;
	float age;
	char * owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
