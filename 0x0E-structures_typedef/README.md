#ifndef DOG_H
#define DOG_H
/**
* struct dog - Define a new type struct dog with 3 elements
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
