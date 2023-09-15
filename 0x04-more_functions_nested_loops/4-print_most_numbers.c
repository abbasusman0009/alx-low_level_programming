#include "main.h"
/**
 * print_most_numbers - A program that print most of the numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		if (!(x == '2' || x == '4'))
		{
			_putchar(x);
		}
		x++;
	}
	_putchar('\n');
}
