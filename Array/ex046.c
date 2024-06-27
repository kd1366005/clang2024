#include<stdio.h>
main()
{

	int gokei, i,cnt;

	int a[][3] = { {10,20,30},{1,2,3} };

	for (i = 0 ; i <= 1; i++) {
		for (cnt = 0, gokei = 0; cnt <= 2; cnt++) {
			printf("a[%d][%d]=%d\n", i, cnt,a[i][cnt]);
			gokei += a[i][cnt];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", i, gokei);
	}
}