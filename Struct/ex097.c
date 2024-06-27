#include<stdio.h>
#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct  ken ken_data[] = { {1,"–kŠC“¹",NULL},{2,"ÂX",NULL},
	{3,"ŠâŽè",NULL},{4,"‹{é",NULL},{5,"H“c",NULL},
	{6,"ŽRŒ`",NULL}, {7,"•Ÿ“‡",NULL},{DATA_END,"",NULL},};

	struct ken *p ,*wp;

	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

		for (p = ken_data; p->code != DATA_END; p = p->next) {
			printf("code=%d name=%s\n", p->code, p->name);
		}
}