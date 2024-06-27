#include<stdio.h>
main()
{
	int h,m,no,m1;
	float s;
	printf("•b”‚ğ“ü—ÍF");
		scanf("%d", &no);
		if (5000< no) {
			printf("ƒGƒ‰[\n");
		}
		else{
			m1 = no;	//•ªŒvZ‚Ì‚½‚ß‚Éc‚·
			h=no/3600;	//ŠÔŒvZ
			m1 = m1 % 3600;	//(5000/3600‚Ì‚ ‚Ü‚è‚PŒÂ–Ú)
			m = m1 / 60;	//•ªŒvZ(1ŒÂ–Ú‚Ì‚ ‚Ü‚è/60)
			s = m1%60;	//
			printf("%dŠÔ%d•ª%.0f•b‚Å‚·", h,m,s);
		}
}