#include "main.h"
/**
  * print_line - A progrma that print a straight line
  * Return: 0
  *@n: a number
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		x = 1;
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
