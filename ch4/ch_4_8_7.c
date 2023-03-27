#include<stdio.h>
int main()
{
	char ch;
	scanf("%c", &ch);
	//printf("%c is %d\n", ch, ch);
	if (ch >= 48 && ch <= 57){
		printf("'%c' is %d\n", ch, ch - 48);
	}
	else if (ch >= 65 && ch <= 70){
		printf("'%c' is %d\n", ch, ch - 55);
	}
	else if (ch >= 97 && ch <= 102){
		printf("'%c' is %d\n", ch, ch - 87);
	}
	return 0;
}
