#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


int main()
{
	int n = 0;
	char board[ROW][COL] = { 0 };//设置棋盘
	srand((unsigned int) time(NULL)); 
	while (1) {
		menu();
		scanf("%d", &n);
		switch (n) {
		case 1:playgame(); //提示游戏开始
			   voidchequerboard(board);//初始化棋盘
			   printchequerboard(board);//打印棋盘
			   playboard(board);//开始下棋
			   break;
		case 0:printf("游戏结束！\n"); return 0;
		default:printf("输入错误，请重新输入！\n"); break;
		}
	}
}