#include<stdio.h>
main()
{
	int mon;

	printf("�������:");
	scanf("%d", &mon);

	if (mon == 2) {
		printf("�ŏI����28���ł�\n");
	}
	if (mon == 4 || mon == 6 || mon == 9||mon == 11) {
		printf("�ŏI����30���ł�\n");
	}
	else {
		printf("�ŏI����31���ł�\n");
	}
}