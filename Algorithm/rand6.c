#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,aite,pp,ep;

	srand(time(0));

	printf("�Ȃɂ������܂����H");
	printf("1:�O�[	2:�`���L	3:�p�[");
	scanf("%d", &i);

	if (i == 0) {
		printf("���Ȃ��̓O�[�ł�");
		pp = 3;
	}
	else if (aite == 0) {
		printf("���Ȃ��̓`���L�ł�");
		pp = 2;
	}
	else {
		printf("���Ȃ��̓p�[�ł�");
		pp = 1;
	}

	srand(time(0));
	rand();
	aite = rand() % 2 ;

	if (aite == 0) {
		printf("�R���s���[�^�[�̓O�[�ł�");
		ep = 3;
		if (pp == ep == 3) {
			
		}
	}
	else if (aite == 0) {
		printf("�R���s���[�^�[�̓`���L�ł�");
		ep = 2;
	}
	else{
		printf("�R���s���[�^�[�̓p�[�ł�");
		ep = 1;
	}

}