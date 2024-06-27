#include<stdio.h>
main()
{
	int score = 0,max_score;
	char ch, name[20],max_name[20];
	FILE* fp;

	fp = fopen("score.txt", "r");

	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("最高得点");

	printf("プレイヤー名を入力");
	scanf("%s", name);

	while (1) {
		printf("現在のスコア：%d('e'で終了)\n", score);

		ch = getch();

		if (ch == 'e') {

			break;
		}
		score++;
	}
	if (score > max_score){
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新！！")

	}

	fp = fopen("score.txt", "w");

	fprintf(fp, "%s\n%d\n", name, score);

	fclose(fp);
}