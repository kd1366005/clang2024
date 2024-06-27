#include<stdio.h>
main()
{
	int a,b;

	a = 1;
	b = 0;

	for (a=1; a<=10; a++) {
		b +=a;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a=%d\n", a, b);
	}
}