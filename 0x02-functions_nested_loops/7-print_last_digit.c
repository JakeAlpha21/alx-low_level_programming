#include "main.h"

/**
 * print_last_digit - Prints out the last digit of a number
 * @k: The number that will be used
 * Return: The value of teh last digit of the number
 */

int print_last_digit(int k)
{
	int last;

	last = k % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
