#include <ctype.h>
#include "main.h"
/**
 * _islower - function who checks if letter is lowercase
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return 1;
	else
		return 0;
}
