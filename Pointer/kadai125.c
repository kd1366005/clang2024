#include<stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int i,*p_data;

	printf("ポインタを固定で表示\n配列 data[]= ");

	p_data = data;

	for (i = 0; *(p_data+i) != -999; i++) {

		printf(" ,%d",*(p_data+i));
	}

	printf("\n\nポインタを変化させて表示\n配列 data[]= ");

	for (p_data = data; *(p_data) != -999; p_data++) {

		printf(" ,%d", *p_data);
	}

}