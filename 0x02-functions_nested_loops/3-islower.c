#include <ctype.h>
#include "main.h"
/**
 * _islower - function who checks if letter is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if @c is a lowercase letter, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
