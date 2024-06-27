#include<stdio.h>
main()
{

	int i, cnt;
	float x[3][2];

	for (i=0;i<=2;i++) {
		for (cnt = 0; cnt <= 1; cnt++) {
			printf("x[%d][%d]=", i, cnt);
			scanf("%f", &x[i][cnt]);
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",i,(x[i][0]+x[i][1]) / 2);
	}
}