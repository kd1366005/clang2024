#include<stdio.h>
main()
{
	float  box[3], sum=0, ave;
	int i;

	for (i = 0; i < 3; i++) {
		printf("���������:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	ave = sum / 3;
	printf("���v��%.2f\n", sum);
	printf("���ς�%.2f\n", ave);
}