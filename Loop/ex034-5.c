#include<stdio.h>
main()
{
	int a, b,num;

	printf("”‚Í?");
	scanf("%d", &num);

	for (a = 0;a < num;a++) {
		for (b = 0; b <num-a-1 ; b++) {
			printf(" ");
		}
			for(b=0;b<a+1;b++){
			printf("*");
		}
		printf("\n");
	}
}