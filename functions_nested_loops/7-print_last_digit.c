#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number received
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	if (num <= -10)
	{
		num = num % 10 * -1;
		_putchar(num + '0');
	} else if (num >= 10)
	{
		num = num % 10;
		_putchar(num + '0');
	} else if (num > -1)
	{
		num = num;
		_putchar(num + '0');
	} else
	{
		num = num + -1;
		_putchar(num + -1 + '0');
	}
	return (num);
}
