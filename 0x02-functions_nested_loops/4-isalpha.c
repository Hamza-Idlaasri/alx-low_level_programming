#include <ctype.h>
#include "main.h"
/**
 * _isalpha - function who checks is the value alphabet
 *
 * @c: The character to be checked
 *
 * Return: 1 if @c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
