#include <stdio.h>
int main()
{
	char a, b, c, d;
	a = 'W';
	b = a + 24;
	c = b + 8;
	d = '\n';
	printf("%c%c%c%c", a, b, c, d);
	return 0; 

	/*The math performed on the char variables manipulates the values stored in those variables.
	A char variable stores an integer value representing an ASCII character code. That code is displayed as a character
	when the %c placeholder is used in printf(), or when sending the value to standard output via the putchar() function.*/