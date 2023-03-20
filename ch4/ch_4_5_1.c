#include <stdio.h>
int main()
{
	char ch;
	printf("Press the button :");
	scanf("%c", &ch);
	switch (ch) {
	case 's' : printf("Bingo\n");
		   break;
	case 't' : printf("Bingo\n");
		   break;
	case 'a' : printf("Bingo\n");
		   break;
	case 'r' : printf("Bingo\n");
		   break;
	default : printf("Error\n");}
		  return 0;
}
