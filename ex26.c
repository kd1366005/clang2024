#include<stdio.h>
main()
{
	int mon;

	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &mon);

	if (mon == 2) {
		printf("ÅI“ú‚Í28“ú‚Å‚·\n");
	}
	if (mon == 4 || mon == 6 || mon == 9||mon == 11) {
		printf("ÅI“ú‚Í30“ú‚Å‚·\n");
	}
	else {
		printf("ÅI“ú‚Í31“ú‚Å‚·\n");
	}
}