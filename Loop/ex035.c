#include<stdio.h>
main()
{
	int su, goukei;

	printf("数を入れて:");
	scanf("%d", &su);

	goukei = 0;

	while(1){

		if (su == -999) {
			break;
		}
		goukei += su;
		printf("数を入れて:");
		scanf("%d", &su);
	}
	printf("合計=%d", goukei);
}