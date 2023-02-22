#include "main.h"

/**
 * _is lower - check if char is lowercase
 * @c: parameter to be printed
 * Return: 1 if it is a lowercase
 * and  0 otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
