#include<stdio.h>
main()

{
	float no1,no2,no3;
	printf("一つ目の実数");
	scanf("%f", &no1);
	printf("二つ目の実数:");
	scanf("%f", &no2);
	printf("三つ目の実数:");
	scanf("%f", &no3);
	printf("合計=%5.2f\n", no1+no2+no3);
	printf("平均=%5.2f\n", (no1+no2+no3)/3);
}