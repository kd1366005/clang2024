#include<stdio.h>
main()
{
	float  box[3], sum=0, ave;
	int i;

	for (i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	ave = sum / 3;
	printf("合計は%.2f\n", sum);
	printf("平均は%.2f\n", ave);
}