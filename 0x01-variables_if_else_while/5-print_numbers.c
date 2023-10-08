#include <stdio.h>
#include <stdio.h>

 /**
  * main - entry point
  * Desc: prints  digits base 10
  * Return: always 0
  */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar(numbers + '0');
	}
	putchar('\n');
		return (0);
}
