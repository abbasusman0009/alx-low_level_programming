#include <stdio.h>
/**
  * main - A program that print a hexadecimal
  * Return: 0(Success)
  */
int main(void)
{
	int x;
	char y;

	y = 'z';
	x = '0';
	while (x <= y)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
