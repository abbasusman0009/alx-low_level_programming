#include "main.h"
/**
 * more_numbers - A program that print a more numbers
 * Return: 0
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar('0' + y);
		}
		_putchar('\n');
	}
}
