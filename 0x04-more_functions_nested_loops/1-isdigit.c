#include "main.h"
/**
 * _isdigit - A program that check the a number a digit or not
 * @c: a interger value
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 'a' && c <= 'f')
		return (1);
	else
		return (0);
}
