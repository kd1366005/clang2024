#include<stdio.h>
main()
{
	char mozi;

	printf("���������:");
	scanf("%c", &mozi);

	if ((mozi >= 'A' && mozi <= 'Z')||(mozi >= 'a' && mozi <= 'z')) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {
		if ('0' <= mozi && mozi< '10') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}