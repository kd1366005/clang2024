#include<stdio.h>
enum
{
	Base = 0,			//0000 0000  通常状態
	Poison = 1 << 0,	//0000 0001	毒状態
	Sleep = 1 << 1,		//0000 0010	眠り状態
	Paralysis = 1 << 2,	//0000 0100	麻痺状態
	Burn = 1 << 3,		//0000 1000	火傷状態
	AtkUp = 1 << 4,		//0001 0000	攻撃力アップ状態
	AtkDown = 1 << 5	//0010 0000　攻撃力ダウン状態
};
typedef unsigned int UINT;

void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	//DisplayStatus(MyState);
	ClearFlag(&MyState);
	//DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("*****現在の状態*****\n");

	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s==Base)
	{
		printf("状態異常なし\n");
	}
	printf("*******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を付与しますか？\n");
		printf("１：毒　２：眠り　３：麻痺　４：火傷　５：攻撃↑　６：攻撃↓　０：終了\n");
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}
		switch (a)
		{
			case 1:
				*s |= Poison;
				break;

			case 2:
				*s |= Sleep;
				break;

			case 3:
				*s |= Paralysis;
				break;

			case 4:
				*s |= Burn;
				break;

			case 5:
				*s |=AtkUp;
				break;

			case 6:
				*s |= AtkDown;
				break;
			
			default://１から６以外の値のとき
				break;

		}
	}
}
void ClearFlag(UINT* s)
{
	int a;

	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を解除しますか？\n");
		printf("１：毒　２：眠り　３：麻痺　４：火傷　５：攻撃↑　６：攻撃↓　7：全解除　０：終了\n");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;

		case 2:
			*s &= ~Sleep;
			break;

		case 3:
			*s &= ~Paralysis;
			break;

		case 4:
			*s &= ~Burn;
			break;

		case 5:
			*s &= ~AtkUp;
			break;

		case 6:
			*s &= ~AtkDown;
			break;

		case 7:
			*s = Base ;
			break;
			
		default:
			break;
		}
	}
}