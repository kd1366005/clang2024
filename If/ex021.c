#include<stdio.h>
main()
{
	int no;
	printf("整数を入力：");
		scanf("%d", &no);
		if (0 < no) {
			printf("入力値はプラスです\n");
		}
		else{
			printf("入力値はマイナスです");
		}
}