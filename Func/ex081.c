#include<stdio.h>

int saidai(int* p, int number);
int saisyou(int *P, int number);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };

	printf("最大値=%d\n", saidai(data,8));
	printf("最小値=%d\n", saisyou(data,8));
}

int saidai(int* p, int number) {
	int i = 0,dai;
	dai = *p;
		p++;
	while(i<number-1){
		if (dai < *p) {

			dai = *p;
		}
		p++;
		i++;
	}
	return dai;
}

int saisyou(int* P, int number) {
	int syou,i=0;
	syou = *P;
		P++;
	while (i < number - 1) {
		if (syou > *P) {

			syou = *P;
		}
		P++;
		i++;
	}
	return syou;
}