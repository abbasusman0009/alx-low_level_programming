#include <stdio.h>
/**
  * main - A program that print a hexadecimal
  * Return: 0(Success)
  */
int main(void)
{
	int x;

	x = '0';
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
