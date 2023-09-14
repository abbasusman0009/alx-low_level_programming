#include "main.h"
/**
 * print_alphabet_x10 -  it a function for 
 * Return: 0
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
