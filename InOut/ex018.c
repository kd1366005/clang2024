#include<stdio.h>
main()
{
	int a, b, c,d;
	printf("������3����");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	printf("���v=%d	����=%.2f", a + b + c,(float)d/3);
}