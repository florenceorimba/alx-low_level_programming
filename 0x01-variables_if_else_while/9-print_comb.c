#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all possible combination of single digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number <= 9; number++;)
	{
	putcher(number + '0');
	if (number < 9)
	{
	putcher(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
