
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�궨��
#define ROW 3
#define COL 3


//����
void DisplayBoard(char board[ROW][COL], int row, int col);
void InitBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//��Ӯ������������������״̬
//����Ӯ-����'*'
//���Ӯ-����'#'
//ƽ��-����'E'
//����-����'C'
 
char IsWin(char board[ROW][COL], int row, int col);