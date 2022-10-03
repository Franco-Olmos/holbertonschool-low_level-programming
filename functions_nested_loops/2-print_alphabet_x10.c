#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase, followed by a new line
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
