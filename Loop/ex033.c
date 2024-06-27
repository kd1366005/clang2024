#include<stdio.h>
main()
{
	int data, sum, cnt;
	float ave;

	sum = 0;
	ave = 0;
	
	printf("”‚Í?");
	scanf("%d" ,&data);


	for (; data!=-999;){

		sum = sum + data;
		cnt++;
		printf("”‚Í?");
		scanf("%d", &data);
	}
	ave = (float)sum / cnt;
	printf("‡Œv=%d\t•½‹Ï=%.2f", sum, ave);

}