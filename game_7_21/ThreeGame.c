
#include "game.h"

//三子棋实现
void ThreeGame()
{
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
}

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int  i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		printf("\n");
	}
}