#include <stdio.h>
int main()
{
	int c;
	printf("I'm waiting for a character:");
	c = getchar();
	printf("I waited for the '%c' character.\n",c);
	return 0; 
	//The character read by getchar() is stored in the computer as an ASCII code value.
}