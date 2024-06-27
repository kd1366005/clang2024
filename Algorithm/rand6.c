#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,aite,pp,ep;

	srand(time(0));

	printf("なにをだしますか？");
	printf("1:グー	2:チョキ	3:パー");
	scanf("%d", &i);

	if (i == 0) {
		printf("あなたはグーです");
		pp = 3;
	}
	else if (aite == 0) {
		printf("あなたはチョキです");
		pp = 2;
	}
	else {
		printf("あなたはパーです");
		pp = 1;
	}

	srand(time(0));
	rand();
	aite = rand() % 2 ;

	if (aite == 0) {
		printf("コンピューターはグーです");
		ep = 3;
		if (pp == ep == 3) {
			
		}
	}
	else if (aite == 0) {
		printf("コンピューターはチョキです");
		ep = 2;
	}
	else{
		printf("コンピューターはパーです");
		ep = 1;
	}

}