#include<stdio.h>
main()
{

	int apa[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6,}} }, i, cnt, j, nin;

	nin = 0;

	printf("�A�p�[�g1(1�K): 3 4 5	(2�K): 4 5 6\n");
	printf("�A�p�[�g1(1�K): 2 2 3	(2�K): 2 5 6\n");
	for (i = 0; i < 2;i++) {
		printf("\n�A�p�[�g%d",i+1);
		for (j = 0; j < 2;j++) {
			printf("(%d�K):",j+1);
			for (cnt = 0; cnt < 3;cnt++) {
				printf("%d", apa[i][j][cnt]);
				nin += apa[i][j][cnt];
			}
		}
	}
	printf("\n�S�̂�%d�l�Z��ł��܂�", nin);
}