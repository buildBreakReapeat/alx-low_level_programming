#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: 0
*/
int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
int last_digit = n % 10;

	/* your code goes there */
if (last_digit < 6 && last_digit != 0)
printf("Last digit of %i is %i and is less than 6 and not 0", n, last_digit);
else if (last_digit == 0)
printf("Last digit of %i is %i and is 0", n, last_digit);
else
printf("Last digit of %i is %i and is greater than 5", n, last_digit);
	return (0);
}
