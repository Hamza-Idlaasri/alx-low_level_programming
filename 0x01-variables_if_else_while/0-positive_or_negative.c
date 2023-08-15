#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD

	if(n > 0)
		printf("%d is positive\n", n);
	if(n == 0)
		printf("%d is zero\n", n);
	if(n < 0)
		printf("%d is negative\n", n);

=======
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
>>>>>>> 24ed9eb18ceb22c5f44db50ed6faa7446898cf81
	return (0);
}
