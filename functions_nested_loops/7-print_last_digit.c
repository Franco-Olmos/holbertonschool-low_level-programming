#include "main.h"

/**
 * main - task7
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int last_d = num % 10;

	if (last_d < 0)
	{
		last_d = -last_d;
	}
	return (last_d);
}
