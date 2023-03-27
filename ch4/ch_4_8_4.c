#include <stdio.h>
int main()
{
	char ch;
	printf("Enter vowel a, e, i, o, u : ");
	scanf("%c", &ch);
	switch (ch)
	{
		case 'a' :
			printf("%c is vowel\n", ch);
			break;
		case 'e' :
			printf("%c is vowel\n", ch);
			break;
		case 'i' :
			printf("%c is vowel\n", ch);
			break;
		case 'o' :
			printf("%c is vowel\n", ch);
			break;
		case 'u' :
			printf("%c is vowel\n", ch);
			break;
		default :
			printf("Please Enter vowel\n");
			break;
	}
	return 0;
}
