#inlude "main.h"
/**
 *_isalpha - check for alphabetic characters
 * @x: the charactr to be chacked
 * Return: 1 for alphabatec character 0 for anything else
 */
int _isalpha(int x)
{
	if ((x >= 65 && <= 90) || (x >= 97 && <= 122))
	{
	return (1);
	}
	return (0);
}
