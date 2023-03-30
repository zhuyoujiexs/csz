// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _crt_secure_no_warnings
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("****************************\n");
	printf("**** 1. Play    0.exit  ****\n");
	printf("****************************\n");
}
void game()
{
	int guess = 0;
	int ret = 0;
	ret = rand()%100+1 ;
	while (1)
	{
		printf("猜猜数字:>");
		scanf("%d", &guess);
		printf("%d\n", ret);
		if (guess > ret)
				printf("猜大了\n");
			else if (guess < ret)
				printf("猜小了\n");
			else
			{
				printf("猜对了");
				break;
			}
		}
	}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do

	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("1");
		game();
		break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);

	return 0;
		}
	
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
/* 调试程序: F5 或调试 >“*//*开始调试”菜单

 入门使用技巧:
   1. 使用解决方案资源管理器窗口添加/管理文件
   2. 使用团队资源管理器窗口连接到源代码管理
  +
 ASDG5A3. 使用输出窗口查看生成输出和其他消息
   *//*4. 使用错误列表窗口查看错误*/
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件