#include "main.h"

/**
 *_islower - checks for lowercase alphabets
 * 
 *@c: The character in ASCII
 *
 *Return: 1 if letter is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		{
	return (1);
		}
	else
		{
	return (0);
		}
	_putchar('\n');
}

