#include<stdio.h>
main()
{
	int data, sum, cnt;
	float ave;

	sum = 0;
	ave = 0;
	
	printf("����?");
	scanf("%d" ,&data);


	for (; data!=-999;){

		sum = sum + data;
		cnt++;
		printf("����?");
		scanf("%d", &data);
	}
	ave = (float)sum / cnt;
	printf("���v=%d\t����=%.2f", sum, ave);

}