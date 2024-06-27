#include<stdio.h>
main()
{
	int i,j;

	printf("”‚Í?");
	scanf("%d", &i);
	do {
		j = 0;
		do {		//5‰ñ•ªƒ‹[ƒv
			printf("*", i);
			j++;
		} while (j < 5);
		printf("\n");
			i--;
	} while (i > 0);
}