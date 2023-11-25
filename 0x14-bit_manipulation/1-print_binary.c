#include "main.h"

/**
 * _power - calculates the powere & base
 * @base: base
 * @power: power
 * Return: base^power
 */

unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;

	for (i = 1; i <= power; i++)
	num *= base;
	return (num);
}

/**
 * print_binary - convert a number to binary
 * @n: number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;

	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
	check = n & divisor;
	if (check == divisor)
	{
		flag = 1;
		_putchar('1');
	}
	else if (flag == 1 || divisor == 1)
	{
	_putchar('0');
	}
	divisor >>= 1;
	}

}
