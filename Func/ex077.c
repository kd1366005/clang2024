#include<stdio.h>

void junjo(int n1, int n2, int n3,int *max,int *min);

main()
{
	int a, b, c,max,min;

	printf("®”‚ð3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b,&c);

	junjo(a, b, c,&max,&min);
	printf("Å‘å’l=%d,Å’á’l=%d", max,min );
}
void junjo(int  n1, int  n2, int n3,int *max,int *min) {
	
	*max = n1;
	if (n2 > *max) {
		*max = n2;
	}
	if (n3 > *max) {
		*max = n3;
	}
	*min = n1;
	if (n2 < *min) {
		*min = n2;
	}
	if (n3 < *min) {
		*min = n3;
	}
	return;
}