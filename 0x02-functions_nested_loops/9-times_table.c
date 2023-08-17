#include "main.h"
/**
 *
 * times_table - function that prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int r = j * i;

			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			if (r > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
		}
		_putchar('\n');
	}
}
