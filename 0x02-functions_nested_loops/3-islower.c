#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @v: The character that has to be checked
 * Return: if lowercase then 1, if anything else then 0.
 */

int _islower(int v)

{
	if (v >= 97 && v <= 122)
	{
	return (1);
	}
	return (0);
}
