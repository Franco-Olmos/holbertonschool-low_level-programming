#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)
{
	int num = 0;
	char chars;

	for (; num <= 9; num++)
		putchar((num % 10) + '0');
	for (chars = 97; chars <= 102; chars++)
		putchar(chars);
	putchar('\n');
	return (0);
}
