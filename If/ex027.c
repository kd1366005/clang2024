#include<stdio.h>
main()

{
	char cha;

	printf("•¶Žš‚ð“ü—Í");
	scanf("%c", &cha);

	if (cha >= 'a' && cha <= 'z') {
		printf("•ÏŠ·‚·‚é‚Æ%c", cha - 0x20);
	}
	else {
		if (cha >= 'A' && cha <= 'Z') {
			printf("•ÏŠ·‚·‚é‚Æ%c", cha + 0x20);
		}
		else {
			printf("ƒGƒ‰[");
		}
	}
}