#include <stdio.h>
/**
  * main - A program that print a combination of a single digit
  * Return: 0(Success)
  */
int main(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
