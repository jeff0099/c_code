#include<stdio.h>
int main()
{
	int  x_side, y_side;
	printf("Enter x_side, y_side : ");
	scanf("%d %d", &x_side, &y_side);
	if (x_side >= -5 && x_side <= 5)
		if (y_side >= -3 && y_side <= 3){
			printf("yes\n");
		}
			else
				printf("no\n");
		else
			printf("no\n");
	return 0;
}
