#include<stdio.h>
main()
{

	char str[256];

	while(gets(str)!=NULL)//Ctrl+Zで終了
	{
		puts(str);//()の中に文字列をそのまま出力して改行
				  //文字(\n)を末尾に追加する

	}
}