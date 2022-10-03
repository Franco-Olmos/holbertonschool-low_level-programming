#include "main.h"
/**
 * main - task2
 * Return 0
 */
void print_alphabet_x10(void)
{
	int alph, time = 0;

	while (time < 10)
	{
		for (alph = 97; alph <= 122; alph++)
		{
			_putchar(alph);
		}
		time++;
		_putchar('\n');
	}
}
