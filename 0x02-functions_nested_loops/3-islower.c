#include "main.h"

/**
 * _islower - entry point
 * Description: Function checks for lowercase character
 * @c: character to check if it is lower case
 * Return: 0- if lowercase, 1- if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
