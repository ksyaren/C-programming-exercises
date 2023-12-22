#include <stdio.h>

int main()
{
	const int v = 3;

	printf("The value is %d\n", v);
	printf("And %d is the value \n", v);
	printf("It's not %d\n", v + 1);
	printf("It's not %d\n", v - 1);
	printf("No, the value is %d\n", v);
	return 0; 
}