#include<stdio.h>
enum
{
	Base = 0,			//0000 0000  �ʏ���
	Poison = 1 << 0,	//0000 0001	�ŏ��
	Sleep = 1 << 1,		//0000 0010	������
	Paralysis = 1 << 2,	//0000 0100	��჏��
	Burn = 1 << 3,		//0000 1000	�Ώ����
	AtkUp = 1 << 4,		//0001 0000	�U���̓A�b�v���
	AtkDown = 1 << 5	//0010 0000�@�U���̓_�E�����
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
	printf("*****���݂̏��*****\n");

	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U���A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s==Base)
	{
		printf("��Ԉُ�Ȃ�\n");
	}
	printf("*******************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ�t�^���܂����H\n");
		printf("�P�F�Ł@�Q�F����@�R�F��Ⴡ@�S�F�Ώ��@�T�F�U�����@�U�F�U�����@�O�F�I��\n");
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
			
			default://�P����U�ȊO�̒l�̂Ƃ�
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
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("�P�F�Ł@�Q�F����@�R�F��Ⴡ@�S�F�Ώ��@�T�F�U�����@�U�F�U�����@7�F�S�����@�O�F�I��\n");
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