#include<stdio.h>
main()
{
	int data, sum, cnt;
	float ave;

	sum = 0;
	ave = 0;
	
	printf("数は?");
	scanf("%d" ,&data);


	for (; data!=-999;){

		sum = sum + data;
		cnt++;
		printf("数は?");
		scanf("%d", &data);
	}
	ave = (float)sum / cnt;
	printf("合計=%d\t平均=%.2f", sum, ave);

}