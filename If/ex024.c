#include<stdio.h>
main()
{
	char mozi;

	printf("文字を入力:");
		scanf("%c",&mozi);

		if (mozi>='A'&&mozi<='Z') {
			printf("大文字です");
		}
		else {
			printf("その他の文字です\n");
		}
}