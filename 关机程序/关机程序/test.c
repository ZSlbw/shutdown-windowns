#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

int main()
{
	char input[20] = { 0 };
	int t = 0;
	int i = 0;
	system("shutdown -s -t 60");
	printf("请输入:我是猪,否则电脑将在1分钟内关机\n");
again:
	scanf("%s", input);
	if ((strcmp(input, "我是猪") == 0))
	{
		system("shutdown -a");
		printf("恭喜你，输入正确！\n");
	}
	else
	{
		printf("输入错误，你还有%d次机会\n", 2 - i);
		i++;
	}
	if (i == 3)
	{
		system("shutdown -a");
		system("shutdown -s -t 10");
		printf("很抱歉，您的使用次数已用完，电脑将强制进行关机\n");
		Sleep(5000);
		system("cls");
		for (t = 0; t<3; t++)
		{
			printf("%d", 3 - t);
			Sleep(1000);
			system("cls");
		}
		printf("今天你保存数据了吗？\n");
		goto here;
	}
	goto again;
here:
	return 0;
}