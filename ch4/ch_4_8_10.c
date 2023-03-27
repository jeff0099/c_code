#include<stdio.h>
int main()
{	
	int ans, day = 0, day_m = 0;
	printf("1, 7, 9, 11\n");
	printf("生日月份在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day_m += 1;
	printf("2, 3, 6, 7, 10, 11\n");
	printf("生日月份在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day_m += 2;
	printf("4, 5, 6, 7, 12\n");
	printf("生日月份在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day_m += 4;
	printf("8, 9, 10, 11, 12\n");
	printf("生日月份在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day_m += 8;
	//printf("Moon is %d\n", day_m);

	printf("1, 3, 5, 7\n");
	printf("9, 11, 13, 15\n");
	printf("17, 19, 21, 23\n");
	printf("25, 27 ,29, 51\n");
	printf("生日在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day += 1;

	printf("2, 3, 6, 7\n");
	printf("10, 11, 14, 15\n");
	printf("18, 19, 22, 23\n");
	printf("26, 27, 30, 31\n");
	printf("生日在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day += 2;

	printf("4, 5, 6, 7\n");
	printf("12, 13, 14, 15\n");
	printf("20, 21, 22, 23\n");
	printf("28, 29, 30 ,31\n");
	printf("生日在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day += 4;

	printf("8, 9, 10, 11\n");
	printf("12, 14, 14, 15\n");
	printf("24, 25, 26, 27\n");
	printf("28, 29, 30, 31\n");
	printf("生日在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day += 8;

	printf("16, 17, 18, 19\n");
	printf("20, 21, 22, 23\n");
	printf("24, 25, 26, 27\n");
	printf("28, 29, 30, 31\n");
	printf("生日在上表請輸入1否則0\n");
	scanf("%d", &ans);
	if (ans)
		day += 16;

	printf("Your birthday is %d / %d\n", day_m, day);
	return 0;
}
