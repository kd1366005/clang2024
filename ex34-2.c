#include<stdio.h>
main()
{
	int i,j;

	printf("数は?");
	scanf("%d", &i);
	do {
		j = 0;
		do {		//5回分ループ
			printf("*", i);
			j++;
		} while (j < 5);
		printf("\n");
			i--;
	} while (i > 0);
}