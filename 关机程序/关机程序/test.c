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
	printf("������:������,������Խ���1�����ڹػ�\n");
again:
	scanf("%s", input);
	if ((strcmp(input, "������") == 0))
	{
		system("shutdown -a");
		printf("��ϲ�㣬������ȷ��\n");
	}
	else
	{
		printf("��������㻹��%d�λ���\n", 2 - i);
		i++;
	}
	if (i == 3)
	{
		system("shutdown -a");
		system("shutdown -s -t 10");
		printf("�ܱ�Ǹ������ʹ�ô��������꣬���Խ�ǿ�ƽ��йػ�\n");
		Sleep(5000);
		system("cls");
		for (t = 0; t<3; t++)
		{
			printf("%d", 3 - t);
			Sleep(1000);
			system("cls");
		}
		printf("�����㱣����������\n");
		goto here;
	}
	goto again;
here:
	return 0;
}