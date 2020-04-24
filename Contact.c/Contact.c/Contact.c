#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

//通讯录初始化函数
void InitContact(Contact *pct)
{
	assert(pct!=NULL);
	memset(pct->data, 0, sizeof(pct->data));
	pct->size = 0;
}
//添加函数
void AddContact(Contact *pct)
{
	char name[MAX_NAME_SIZE];
	char sex[3];
	char tel[12];
	char addr[MAX_ADDR_SIZE];
	short age;
	printf("姓名：>");
	scanf("%s",pct->data[pct->size].name);
	printf("性别：>");
	scanf("%s", pct->data[pct->size].sex);
	printf("年龄：>");
	scanf("%s", &(pct->data[pct->size].age));
	printf("电话：>");
	scanf("%s", pct->data[pct->size].tel);
	printf("住址：>");
	scanf("%s", pct->data[pct->size].addr);
	pct->size++;
	printf("新增通讯人员信息成功...\n");

}
//显示函数
void ShowContact(Contact *pct)
{
	printf("**********************************\n");
	printf("*%-10s%-8s%-8d%-12s%-30s\n","姓名","性别","年龄","电话","住址");
	for (size_t i = 0; i < pct->size;i++)
	{
		printf("*%-10s%-8s%-8d%-12s%-30s\n",
			pct->data[i].name,
			pct->data[i].sex,
			pct->data[i].age,
			pct->data[i].tel,
			pct->data[i].addr);
	}
	printf("**********************************\n");
}

static int FindByName(Contact *pct,char *name)
{
	for (size_t i = 0; i < pct->size;i++)
	{
		if (strcmp(pct->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
//查找函数
void FindContact(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size==0)
	{
		printf("通讯录为空，不能查询.....\n");
		return;
	}

	char name[MAX_NAME_SIZE] = {0};
	printf("请输入要查询的名字:>");
	scanf("%d",name);
	int index = FindByName(pct,name);
	if (index == -1)
	{
		printf("查无此人.....\n");
		return;
	}
	printf("*%-10s%-8s%-8d%-12s%-30s\n", "姓名", "性别", "年龄", "电话", "住址");
	
	printf("*%-10s%-8s%-8d%-12s%-30s\n",
			pct->data[index].name,
			pct->data[index].sex,
			pct->data[index].age,
			pct->data[index].tel,
		    pct->data[index].addr);
}
//删除函数
void DelContact(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("通讯录为空，不能删除.....\n");
		return;
	}
	char name[MAX_NAME_SIZE] = { 0 };
	printf("请输入要删除的名字:>");
	scanf("%d", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("要删除的人不存在.....\n");
		return;
	}
	for (int i = index; i < pct->size;i++)
	{
		pct->data[i] = pct->data[i + 1];
		pct->size--;
	}
}

//修改函数
void DodifyContact(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("通讯录为空，不能修改.....\n");
		return;
	}
	char name[MAX_NAME_SIZE] = { 0 };
	printf("请输入要修改的名字:>");
	scanf("%d", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("要修改的人不存在.....\n");
		return;
	}
	int selset;
	while (selset)
	{
	printf("你要修改的信息(1-姓名 2-性别 3-年龄 4-电话 5-住址)\n");
	scanf("%d", &selset);
	switch (selset)
	{
	case 1:
		printf("请输入要修改的姓名:>");
		scanf("%s",pct->data[index].name);
			break;
	case 2:
		printf("请输入要修改的性别:>");
		scanf("%s", pct->data[index].sex);
			break;
	case 3:
		printf("请输入要修改的年龄:>");
		scanf("%d", pct->data[index].age);
			break;
	case 4:
		printf("请输入要修改的电话:>");
		scanf("%d", pct->data[index].tel);
			break;
	case 5:
		printf("请输入要修改的住址:>");
		scanf("%d", pct->data[index].addr);
			break;
	default:
			printf("修改选项出错，请重新选择\n");
			continue;
	}
	break;
	}
	printf("修改成功......\n");
}

//清空函数
void ClearContact(Contact *pct)
{
	printf("确定要清空通讯录吗(Y/N):>");
	char ch;
	scanf("%c",&ch);
	if (ch == 'N' || ch == 'n')
		return;
	pct->size = 0;
	memset(pct->data, 0, sizeof(pct->data));	
}

//排序函数
void SortContact(Contact *pct)
{
	for (int i = 0; i < pct->size;i++)
	{
		for (int j = 0; j < pct->size - i - 1;j++)
		{
			if (strcmp(pct->data[j].name, pct->data[j + i].name)>0)
			{
				PersonInfo tmp = pct->data[j];
				pct->data[j] = pct->data[j + 1];
				pct->data[j + 1] = tmp;
			}
		}
	}
	printf("排序成功.....\n");
}
