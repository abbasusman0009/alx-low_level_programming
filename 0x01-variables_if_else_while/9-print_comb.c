#include <stdio.h>
/**
  * main - A program that print a combination of a single digit
  * Return: 0(Success)
  */
int main(void)
{
	int x;

	x = 'a';
	while (x < 'k')
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);
}
