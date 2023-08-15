#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; alphab[i] != '\0' ; i++)
		putchar(alphab[i]);
	putchar('\n');
	return (0);
}
