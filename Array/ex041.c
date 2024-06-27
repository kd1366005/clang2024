#include<stdio.h>
main()
{
	float  box[3], sum=0, ave;
	int i;

	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	ave = sum / 3;
	printf("‡Œv‚Í%.2f\n", sum);
	printf("•½‹Ï‚Í%.2f\n", ave);
}