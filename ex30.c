#include<stdio.h>
main()
{
	int num, su;

	printf("��������");
	scanf("%d", & num);
	su = 0;

		while (su <= 10) {
			printf("%d+%d=%d\n", num, su, num + su);
			su++;
	}
}