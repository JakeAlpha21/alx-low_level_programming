#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Beginning code
 * Return: 0 (good looks)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	w = n % 10;
	if (w > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, w);
	if (w == 0)
		printf("Last digit of %d and is 0\n", n, w);
	if (w < 6 && w != 0)
		printf("Last digit of %d and is less than 6 and not o\n", n, w);
	return (0);
}
