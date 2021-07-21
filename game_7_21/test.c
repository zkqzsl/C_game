
#include "game.h"

void menu()
{
	printf("**********************************\n");
	printf("******      1.猜数字        ******\n");
	printf("******      2.三子棋        ******\n");
	printf("******      3.扫雷          ******\n");
	printf("******      0.退出          ******\n");
	printf("**********************************\n");
}

//
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			GuessNumber();
			break;
		case 2:
			ThreeGame();
			break;
		case 3:
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}