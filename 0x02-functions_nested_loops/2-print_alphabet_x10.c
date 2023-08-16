#include "main.h"
/**
 * print_alphabet_x10 - void function for printing alphabets 10 times
 */
void print_alphabet_x10(void)
{
        char lowercase = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (lowercase <= 'z')
        	{
                	_putchar(lowercase);
                	lowercase++;
        	}
        	_putchar('\n');
		lowercase = 'a';
	}
}
