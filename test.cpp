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
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//落子
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else printf("平局\n");
}
//输赢
//电脑赢-返回'*'
//玩家赢-返回'#'
//平局-返回'E'
//继续-返回'C'

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();//出现菜单
		printf("请输入：");
		scanf("%d", &input);
		printf("\n");
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入的数字非法，请重新输入");
			break;
		}

	} while (input);
		return 0;
}
