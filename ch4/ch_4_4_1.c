#include <stdio.h>
int main()
{
	char i;
	printf("Press the button :");
	scanf("%c", &i);
	printf("%c ASCII is %d\n", i, i);
	if (i >= 48 && i <= 57)
		printf("number\n");
	else if (i >= 65 && i <= 90)
		printf("Uppercase english\n");
	else if (i >= 97 && i <= 122)
		printf("lowercase english\n");
	else
		printf("others\n");
	return 0;
}
