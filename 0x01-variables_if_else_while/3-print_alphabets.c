#include <stdio.h>
/**
  * main - A program that will display a character From A to Z in sl and cl
  * Return: 0(Succes)
  */
int main(void)
{
	char x;

	char y;

	x = 'a';

	y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	return (0);
}

