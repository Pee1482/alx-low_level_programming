#include <stdio.h>
/**
 * main - A program that print the size of the veriours computer types
 * Return 0 (success)
 */int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;


prinf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(a));
prinf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
