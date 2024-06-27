#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 },i,sum;
	int* p_a;

	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b,sum1;

	sum = 0;
	sum1 = 0;
	p_a = a;
	p_b = b;

	for (i = 0; i < 6; i++) {

		sum += *p_a;

		p_a++;
	}

	printf("配列a 合計=%d	平均=%.3f",sum,sum/6.0 );


	for (i = 0; i < 6; i++) {

		sum1 += *p_b;

		p_b++;
	}
	printf("\n配列b 合計=%.3f	平均=%.3f",sum1,sum1/4.0 );
}