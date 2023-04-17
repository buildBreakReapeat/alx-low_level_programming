#include "dog.h"

/**
* print_dog - function to print struct dog
* @d: struct dog init
*/

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

if (d->age != NULL)
printf("Age: %.6f\n", d->age);
else
printf("(nil)");

if (d->owner == NULL)
printf("(nil)\n");
else
printf("Owner: %s\n", d->owner);
}