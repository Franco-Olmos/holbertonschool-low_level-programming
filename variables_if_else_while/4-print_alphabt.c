#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (0) Success
 */
int main(void)
{
	char chars;

	for (chars = 97; chars <= 122; chars++)
	{
		if (chars != 113 && chars !=  101)
			putchar(chars);
	}
	putchar('\n');
	return (0);
}
