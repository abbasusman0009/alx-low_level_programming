#include "main.h"
/**
 * _isupper - A program that check letter is upper or lower
 * @c:A character that is used
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c <= 65 && c  >= 90)
		return (1);
	else
		return (0);
}
