#include<stdio.h>
main()
{
	int h,m,no,m1;
	float s;
	printf("�b������́F");
		scanf("%d", &no);
		if (5000< no) {
			printf("�G���[\n");
		}
		if(0 > no) {
			printf("�}�C�i�X�̓G���[�ł�");
		}
		else{
			m1 = no;	//���v�Z�̂��߂Ɏc��
			h=no/3600;	//���Ԍv�Z
			m1 = m1 % 3600;	//(5000/3600�̂��܂�P��)
			m = m1 / 60;	//���v�Z(1�ڂ̂��܂�/60)
			s = m1%60;	//
			printf("%d����%d��%.0f�b�ł�", h,m,s);
		}
}