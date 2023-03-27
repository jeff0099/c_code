//Cramer's rule
//When a*d - b*c = 0 >>> No solution
#include<stdio.h>
int main()
{
	int a, b, e, x;
	int c, d, f, y;
	printf("Enter parameter : ");
	scanf("%d, %d, %d, %d, %d, %d", &a, &b, &e, &c, &d, &f);
	if (a*d - b*c == 0)
		printf("No solution\n");
	else{
		x = (e*d - b*f) / (a*d - b*c);
		y = (a*f - e*c) / (a*d - b*c);
		printf("x = %d , y = %d\n", x, y);
	}	
	return 0;
}
