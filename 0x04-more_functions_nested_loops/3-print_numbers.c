#include "main.h"
/**
 * print_numbers - A program that display 0-9
 * Return 0
 */
void print_numbers(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		_putchar(x);
		x++;
	}
	_putchar("\n");
}
