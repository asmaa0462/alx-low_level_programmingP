#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print values of n status:
 *              greater than, is zero and is not less than 6
 *
 * Return: Always 0(Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0", n, digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0", n, digit);
	return (0);
}
