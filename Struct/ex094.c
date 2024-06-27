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

		printf("%dl–Ú",i+1);

		printf("–¼‘O‚ð“ü—Í:");
		scanf("%s",(p+i)->name);

		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í");
		scanf("%d%d%d", &(p+i)->birth[0], &(p+i)->birth[1], &(p + i)->birth[2]);

		printf("ŒŒ‰tŒ^‚ð“ü—Í:");
		scanf("%s", (p + i)->blood);
	}

	for (i = 0; i < 5; i++) {
		if (strcmp((p + i)->blood, "a")==0) {
			printf("%s--%d”N%dŒŽ%d“ú¶@ŒŒ‰tŒ^-%sŒ^\n", (p + i)->name, (p + i)->birth[0], (p + i)->birth[1], (p + i)->birth[2], (p + i)->blood);
		}
	}
}