#include<stdio.h>
#include<stdlib.h>

/**
 * main - multplies arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, mul = 0;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;
	printf("%d\n", mul);
	}
	return (0);

}
