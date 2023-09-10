#include <stdio.h>
/**
  * main - A program that print alphabet in lowercase letters
  * Return: 0(Success)
  */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		putchar('\n');
		x++;
	}
	return (0);
}
