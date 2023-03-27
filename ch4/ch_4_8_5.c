#include<stdio.h>
int main()
{
	int num;
	_Bool TF;
	printf("Please Enter leap year : ");
	scanf("%d", &num);
	TF = (num % 4) == 0 && (num % 100) != 0  || (num % 400) == 0;	
	if (TF)
		printf("Is leap year\n");
	else
		printf("Please enter lear year\n");
	printf("num %% 4 == 0 >> %d\n", (num % 4) == 0);
	printf("num %% 100 != 0 >> %d\n", (num % 100) != 0);
	printf("num %% 400 == 0 >> %d\n", (num % 400) == 0);
	return 0;
}
