#include<stdio.h>
main()
{
	char moji1[80], moji2[80],c[80];
	int i;

	printf("������1�����");
	scanf("%s",&moji1[0]);
	printf("������2�����");
	scanf("%s",&moji2[0]);

	printf("moji1 = %s\t",&moji1[0]);
	printf("moji2 = %s",&moji2[0]);

	for (i = 0; c[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = c[i]; i++);
	printf("\n����ւ����\n");
	printf("moji1 = %s	moji2=%s",&moji1[0], &moji2[0]);
}