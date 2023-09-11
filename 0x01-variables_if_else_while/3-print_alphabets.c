#include <stdio.h>
/**
  * main - A program that will display a character From A to Z in sl and cl
  * Return: 0(Succes)
  */
int main(void)
{
	char x;

	char y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	return (0);
}

