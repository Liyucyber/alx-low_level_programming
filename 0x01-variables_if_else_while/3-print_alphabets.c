#include <stdio.h>
/**
 *main - Entry point
 *Description: 'printing alphabets lower case and upper case'
 *Return: Always 0
 */
int main(void)
{
	int n = 97;
	int b = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (b <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
