#include<stdio.h>
main()
{
	int su, goukei;

	printf("��������:");
	scanf("%d", &su);

	goukei = 0;

	while(1){

		if (su == -999) {
			break;
		}
		goukei += su;
		printf("��������:");
		scanf("%d", &su);
	}
	printf("���v=%d", goukei);
}