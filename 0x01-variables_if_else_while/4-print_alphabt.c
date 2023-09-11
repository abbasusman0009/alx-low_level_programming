#include <stdio.h>
/**
  * main - A program that will print alphabate from a-z without e and q
  * Return: 0(Success)
  */
int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');
	return (0);
}
