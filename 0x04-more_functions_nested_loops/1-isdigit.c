#include "main.h"
#include <stdio.h>

/**
* _isdigit - check for a digit ( 0 through 9)
* @c: is a variable
* Return: Always 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
