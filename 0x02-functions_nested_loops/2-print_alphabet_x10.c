#include "main.h"
/**
 * main - A program thatta print lowercase 10x times
 * print_alphabet_x10 -  it a function
 * Return:
 */
void print_alphabet_x10(void)/* it is a fuction */
{
	char x;
	int i;

	x = 'a';
	i = 0;

	while (i <= 9)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
