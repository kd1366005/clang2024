#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,ans,num,cnt;

	srand(time(0));
	rand();
	ans = rand()%100 + 1;

	printf("かずあてゲーム\n");
	printf("1〜100までの数を入力\n");

	cnt = 0;

	while(1) {

		printf("数1〜100を入力:");
		scanf("%d", &num);

		cnt++;

		if (ans > num) {
			printf("%dより大きいです\n\n", num);
		}
		else if (ans < num) {
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("あたり　%d回であてました\n", cnt);
			break;
		}
	}

}