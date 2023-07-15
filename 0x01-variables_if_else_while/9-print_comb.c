#include <stdio.h>
/**
 * main - Beginning of code
 * Return: 0 (good looks)
 */
int main(void)
{
	int w;

	for (w = 0; w < 10; w++)
	{
		putchar(w + '0');
		if (w < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
