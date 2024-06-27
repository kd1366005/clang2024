#include<stdio.h>
struct  day{
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[5] = { {"a",2000,2,11,"a"},
	{"b",1999,12,31,"o"},{"c",1999,2,25,"ab"},
	{ "d",2000,3,1,"a" } ,{"e",2000,5,10,"b"} };
	struct profile* p;

	p = data;

	int i;
	for (i = 0; i < 5; i++) {
		if (data[i].date.tuki == 2) {
			printf("%s--%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n",
				(p+i)->name, (p + i)->date.nen, (p + i)->date.tuki,
				(p + i)->date.hi, (p + i)->blood);
		}
	}
}