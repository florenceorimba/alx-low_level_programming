#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combination of two digits
 * Number must be separated by ,, follwed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the digits 0 and 1
 * Print only the smallest combination of the two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use thte putcher function
 * (every other function (printf, puts, etc..) is forbidden
 * You can only use putcher five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
        int c;

        int d;

	c = 'a'
	d = 0
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < C)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
