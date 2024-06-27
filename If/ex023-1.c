#include<stdio.h>
main()
{
	int h,m,no,m1;
	float s;
	printf("秒数を入力：");
		scanf("%d", &no);
		if (5000< no) {
			printf("エラー\n");
		}
		if(0 > no) {
			printf("マイナスはエラーです");
		}
		else{
			m1 = no;	//分計算のために残す
			h=no/3600;	//時間計算
			m1 = m1 % 3600;	//(5000/3600のあまり１個目)
			m = m1 / 60;	//分計算(1個目のあまり/60)
			s = m1%60;	//
			printf("%d時間%d分%.0f秒です", h,m,s);
		}
}