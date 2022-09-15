#include "main.h"

/**
 * _isupper - function that checks for upper case char
 * @c : The number to be checked
 * Return: 1 if c is upper case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
