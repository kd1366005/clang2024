#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int dice;

	srand(time(0));
	rand();
	dice = rand()%100+1;

	if (dice < 30) {
		printf("��S�̈ꌂ");
	}
	else {
		printf("�ʏ�U��");
	}
}