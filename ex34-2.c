#include<stdio.h>
main()
{
	int i,j;

	printf("����?");
	scanf("%d", &i);
	do {
		j = 0;
		do {		//5�񕪃��[�v
			printf("*", i);
			j++;
		} while (j < 5);
		printf("\n");
			i--;
	} while (i > 0);
}