#include "main.h"

/**
 * print_alphabet_x10 - The alphabet will be x10 times
 * Return: void (C'est Du Bon)
 */

void print_alphabet_x10(void)
{
char ch;
int v;
v = 0;
while (v < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
v++;
}

}
