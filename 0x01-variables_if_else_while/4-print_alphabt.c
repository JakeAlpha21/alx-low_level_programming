#include <stdio.h>
/**
 * main - Beginning of prog
 * Return: 0 (good looks)
 */

int main(void)
{
	char w;

	w = 'a';
	while
		(w <= 'z') {
			if (w != 'q' && w != 'e')
				putchar(w);
			w++;
		}
	putchar('\n');
	return (0);
}
