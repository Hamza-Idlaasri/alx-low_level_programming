#include <stdlib.h>
#include "main.h"
/**
 * _abs - function that computes the abs value of an integer
 *
 * @n: The number to be checked
 *
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
