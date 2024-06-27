#include<stdio.h>
main()
{
	int tbl[][3] = { { 10,20,30 }, { 40, 50, 60 }, { 70,80,90 } },i,j;
	int* p_tbl;

	p_tbl = &tbl[0][0];

	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", *p_tbl++);
		}
		printf("%d \n", *p_tbl++);
	}
}