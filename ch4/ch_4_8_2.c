#include <stdio.h>
int main()
{
	int average;
	printf("Enter Average : ");
	scanf("%d", &average);
	if (average >= 90)
		printf("Grade A\n");
	else if (average >= 85)
		printf("Grade B\n");
	else if (average >= 80)
		printf("Grade C\n");
	else
		printf("Grade F\n");
	return 0;
}
