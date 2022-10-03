#include "main.h"
/**
 * main - task4
 *
 * Return: 1 if c is a letter, else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
