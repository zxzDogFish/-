
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//宏定义
#define ROW 3
#define COL 3


//声明
void DisplayBoard(char board[ROW][COL], int row, int col);
void InitBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//输赢函数，告诉我们四种状态
//电脑赢-返回'*'
//玩家赢-返回'#'
//平局-返回'E'
//继续-返回'C'
 
char IsWin(char board[ROW][COL], int row, int col);