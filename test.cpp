#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("****  1.play   0.exit  ****\n");
	printf("***************************\n");
}
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else printf("ƽ��\n");
}
//��Ӯ
//����Ӯ-����'*'
//���Ӯ-����'#'
//ƽ��-����'E'
//����-����'C'

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();//���ֲ˵�
		printf("�����룺");
		scanf("%d", &input);
		printf("\n");
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("��������ַǷ�������������");
			break;
		}

	} while (input);
		return 0;
}
