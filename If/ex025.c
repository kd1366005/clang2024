#include<stdio.h>
main()
{
	char mozi;

	printf("文字を入力:");
	scanf("%c", &mozi);

	if ((mozi >= 'A' && mozi <= 'Z')||(mozi >= 'a' && mozi <= 'z')) {
		printf("アルファベットです");
	}
	else {
		if ('0' <= mozi && mozi< '10') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
}