#include "main.h"
 /**
 *_isalpha - checks for alphabetic characters, upper or lowercase.
 *
 * @c: the letter to be checked.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
