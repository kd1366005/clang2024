#include<stdio.h>
main()

{
	char cha;

	printf("文字を入力");
	scanf("%c", &cha);

	if (cha >= 'a' && cha <= 'z') {
		printf("変換すると%c", cha - 0x20);
	}
	else {
		if (cha >= 'A' && cha <= 'Z') {
			printf("変換すると%c", cha + 0x20);
		}
		else {
			printf("エラー");
		}
	}
}