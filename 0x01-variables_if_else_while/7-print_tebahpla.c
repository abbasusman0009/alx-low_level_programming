#include <stdio.h>
/**
  * main - A program to print alphabate form a-z in reverse order
  * Return: 0(Success)
  */
int main(void)
{
	char x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
