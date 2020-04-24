#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

void Menu()
{
	printf("******************************\n");
	printf("* [1] Add         [2] Del    *\n");
	printf("* [3] Find        [4] Modify *\n");
	printf("* [5] Show        [6] Clear  *\n");
	printf("* [7] Sort        [0] Quit   *\n");
	printf("******************************\n");
}
int main(int argc,char *argv[])
{
	Contact cont;//定义通讯录变量
	InitContact(&cont);


	int select = 1;
	while (select)
	{
		Menu();
		printf("请选择：>");
		scanf("%d",&select);
		if (select == QUIT)
			break;
		switch (select)
		{
		case ADD:
			AddContact(&cont);
			break;
		case DEL:
			DelContact(&cont);
			break;
		case FIND:
			FindContact(&cont);
			break;
		case MODIFY:
			ModifyContact(&cont);
			break;
		case SHOW:
			ShowContact(&cont);
			break;
		case CLEAR:
			ClearContact(&cont); 
			break;
		case SORT:
			SortContact(&cont);
			break;
		default:
			printf("选择错误，请重新输入...\n");

		}
	}

	printf("退出通讯系统，good Bey......\n");
	return 0;
}