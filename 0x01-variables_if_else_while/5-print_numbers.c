#include <stdio.h>
/**
  * main - A program that will print 0-9
  * Return: 0(Succes)
  */
int main(void)
{
	int x;

	x = 0;
	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
