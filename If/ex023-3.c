#include<stdio.h>
main()
{
	int en,sei,sei2,an;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d",&en);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í:");
		scanf("%d%d",&sei,&sei2);
		if (en == 1) {
			an = sei + sei2;
			printf("%d+%d=%d", sei, sei2, an);
		}
		else{
		if (en == 2) {
			an = sei - sei2;
			printf("%d+%d=%d", sei, sei2, an);
		}
		else{
		if (en == 3) {
			an = sei * sei2;
			printf("%d+%d=%d", sei, sei2, an);
		}
		else{
					if (en == 4) {
						an = sei / sei2;
						printf("%d+%d=%d", sei, sei2, an);
					}
				}
			}
		}
}