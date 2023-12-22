#include <stdio.h>
int main()
{
	printf("%d/%d=%.1f\n", 2, 5, 2.0 / 5.0);
	return 0; 
	// the %.1f placeholder ensures that the number output shows only one digit after the decimal place.
}