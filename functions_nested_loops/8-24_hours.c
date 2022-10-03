#include "main.h"
/**
 * main - task8
 *
 * Return - time
 */
void jack_bauer(void)
{
	int hou, min;

	for (hou = 0; hou < 24; hou++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hou / 10) + '0');
			_putchar((hou % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
