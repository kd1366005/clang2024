#include<stdio.h>
main()
{
	int mon;

	printf("月を入力:");
	scanf("%d", &mon);

	if (mon == 2) {
		printf("最終日は28日です\n");
	}
	if (mon == 4 || mon == 6 || mon == 9||mon == 11) {
		printf("最終日は30日です\n");
	}
	else {
		printf("最終日は31日です\n");
	}
}