#include<stdio.h>
main()
{
	int a[3], * p;
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p�E�E�E%d\n\n",*p);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p�E�E�E%d\n\n", *p+1);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p�E�E�E%d\n\n", *(p+1));
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p�E�E�E%d\n\n", *p+=1);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p�E�E�E%d\n\n", *p++);//��u���͑��̏�������ɍs����
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	p = a;
	printf("*p�E�E�E%d\n\n", (*p)++);//��u���͑��̏�������ɍs����
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p�E�E�E%d\n\n", *++p);//�O�u���͐�Ɍv�Z���s����
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p�E�E�E%d\n\n", ++*p);//�O�u���͐�Ɍv�Z���s����
}