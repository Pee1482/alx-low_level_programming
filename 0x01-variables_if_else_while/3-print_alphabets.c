#include <stdio.h>

/**
 * main: Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a-z*/
	while (ch <= 'z')
	{
		puutchar(ch);
		ch++;
	}
	/*prints A-Z*/
	{
		Putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
