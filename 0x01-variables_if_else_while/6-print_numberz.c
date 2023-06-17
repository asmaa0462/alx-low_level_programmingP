#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print int variable 0-9 using putchar
 *
 * Return: Always 0(Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
