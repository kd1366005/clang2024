#include<stdio.h>
struct syohin_data {

	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syohin_data* p;

	p = syohin;

	int i;

	for (i = 0; i < 3; i++) {

		printf("���i��:%s\t",(p+i)->name);
		printf("�P��:%d\t", (p+i)->tanka);
		printf("��:%d\t", (p+i)->kosuu);
		printf("���z:%d\n",(p+i)->tanka*(p+i)->kosuu);
	}
}
