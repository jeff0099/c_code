#include <stdio.h>
int main()
{
	int number, val;
	printf("Enter a number : ");
	scanf("%d", &number);
	val = (number < 0 ) ? number *= 1 : number;
	printf("Absolute is %d\n", val);
	return 0;
}
