#include<stdio.h>
main()
{
	int nen;
	printf("西暦を入力");
	scanf("%d", &nen);
	if (nen%4==0) {
		printf("閏年です");
	}
	else {
		printf("閏年ではありません");
	}
}