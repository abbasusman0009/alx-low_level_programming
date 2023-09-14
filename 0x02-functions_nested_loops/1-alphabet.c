#include "main.h"
/**
 * main - A program that print a fuction to prints lowercase letters
 * Return: 0
 */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	return (0);
}
