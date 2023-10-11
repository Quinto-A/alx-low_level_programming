#include <stdio.h>

/**
 * main - main function
 * return - the value supposed to
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
