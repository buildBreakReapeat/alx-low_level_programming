#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: 0
*/
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
if (i > 0)
printf("%i is positive\n", i);
else if (i == 0)
printf("%i is zero\n", i);
else
printf("%i is negative\n", i);
}
