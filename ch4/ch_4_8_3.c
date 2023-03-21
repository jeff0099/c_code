#include <stdio.h>
int main()
{
	int  n1, n2, n3, n4, n5, val;
	printf("Enter 5 numbers : ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	if (n1 > n2)
		val = n1;
	else if (n3 > val)
		val = n3;
	else if (n4 > val)
		val = n4;
	else if (n5 > val)
		val = n5;
	printf("Maximum is %d\n", val);
	return 0;
}
