#include<stdio.h>
#include<string.h>

struct profile{

	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[5];
	struct profile * p;
	p = data;
	int i;

	for (i = 0; i < 5; i++) {

		printf("%d人目",i+1);

		printf("名前を入力:");
		scanf("%s",(p+i)->name);

		printf("生年月日を空白で区切って入力");
		scanf("%d%d%d", &(p+i)->birth[0], &(p+i)->birth[1], &(p + i)->birth[2]);

		printf("血液型を入力:");
		scanf("%s", (p + i)->blood);
	}

	for (i = 0; i < 5; i++) {
		if (strcmp((p + i)->blood, "a")==0) {
			printf("%s--%d年%d月%d日生　血液型-%s型\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood);
		}
	}
}