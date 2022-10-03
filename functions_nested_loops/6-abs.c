#include "main.h"
/**
 * main - task6
 *
 * Return: 
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = (-1) * i;
		return (i);
	}
	else if (i > 0)
		return (i);
	return (0);
}
