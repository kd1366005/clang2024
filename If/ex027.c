#include<stdio.h>
main()

{
	char cha;

	printf("���������");
	scanf("%c", &cha);

	if (cha >= 'a' && cha <= 'z') {
		printf("�ϊ������%c", cha - 0x20);
	}
	else {
		if (cha >= 'A' && cha <= 'Z') {
			printf("�ϊ������%c", cha + 0x20);
		}
		else {
			printf("�G���[");
		}
	}
}