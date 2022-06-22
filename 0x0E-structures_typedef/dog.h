#ifndef DOG_H
#define DOG_H
/*end of include guard*/
/**
 * struct dog - create a dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*end of structure*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*end of prototypes*/
#endif/*DOG_H*/
