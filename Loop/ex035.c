#include<stdio.h>
main()
{
	int su, goukei;

	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &su);

	goukei = 0;

	while(1){

		if (su == -999) {
			break;
		}
		goukei += su;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &su);
	}
	printf("‡Œv=%d", goukei);
}