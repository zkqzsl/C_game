
#include "game.h"

//猜数字实现
void GuessNumber()
{
	int ret = 0;
	ret = rand() % 100 + 1;//生成随机数1~100
	for (;; )
	{
		int guess;
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("你猜对了\n");
			break;
		}
		else if (guess >= ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
	}
}