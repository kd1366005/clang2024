#include<stdio.h>
main()

{
	float no1,no2,no3;
	printf("��ڂ̎���");
	scanf("%f", &no1);
	printf("��ڂ̎���:");
	scanf("%f", &no2);
	printf("�O�ڂ̎���:");
	scanf("%f", &no3);
	printf("���v=%5.2f\n", no1+no2+no3);
	printf("����=%5.2f\n", (no1+no2+no3)/3);
}