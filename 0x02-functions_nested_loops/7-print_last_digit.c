#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n : is a digit
 *
 * Return: the last number of a digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
