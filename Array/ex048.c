#include<stdio.h>
main()
{

	int apa[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6,}} }, i, cnt, j, nin;

	nin = 0;

	printf("アパート1(1階): 3 4 5	(2階): 4 5 6\n");
	printf("アパート1(1階): 2 2 3	(2階): 2 5 6\n");
	for (i = 0; i < 2;i++) {
		printf("\nアパート%d",i+1);
		for (j = 0; j < 2;j++) {
			printf("(%d階):",j+1);
			for (cnt = 0; cnt < 3;cnt++) {
				printf("%d", apa[i][j][cnt]);
				nin += apa[i][j][cnt];
			}
		}
	}
	printf("\n全体で%d人住んでいます", nin);
}