#include<stdio.h>
int main()
{
	int score;
		printf("Please enter your score : ");
		scanf("%d", &score);
		if (score <= 100 && score >= 80)
			printf("Your Grade Point Averge is : A\n");
		else if (score <= 79 && score >= 70)
			printf("Your Grade Point Averge is : B\n");
		else if (score <= 69 && score >= 60)
			printf("Your Grade Point Averge is : C\n");
		else if (score <= 59 && score >= 50)
			printf("Your Grade Point Averge is : D\n");
		else
			printf("Your Grade Point Averge is : F\n");
		return 0;
	}

