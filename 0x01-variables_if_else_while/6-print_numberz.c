#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all single digit numbers of base ten'
 *Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n >= 0; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
