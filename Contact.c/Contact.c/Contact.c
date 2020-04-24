#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

//ͨѶ¼��ʼ������
void InitContact(Contact *pct)
{
	assert(pct!=NULL);
	memset(pct->data, 0, sizeof(pct->data));
	pct->size = 0;
}
//��Ӻ���
void AddContact(Contact *pct)
{
	char name[MAX_NAME_SIZE];
	char sex[3];
	char tel[12];
	char addr[MAX_ADDR_SIZE];
	short age;
	printf("������>");
	scanf("%s",pct->data[pct->size].name);
	printf("�Ա�>");
	scanf("%s", pct->data[pct->size].sex);
	printf("���䣺>");
	scanf("%s", &(pct->data[pct->size].age));
	printf("�绰��>");
	scanf("%s", pct->data[pct->size].tel);
	printf("סַ��>");
	scanf("%s", pct->data[pct->size].addr);
	pct->size++;
	printf("����ͨѶ��Ա��Ϣ�ɹ�...\n");

}
//��ʾ����
void ShowContact(Contact *pct)
{
	printf("**********************************\n");
	printf("*%-10s%-8s%-8d%-12s%-30s\n","����","�Ա�","����","�绰","סַ");
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
//���Һ���
void FindContact(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size==0)
	{
		printf("ͨѶ¼Ϊ�գ����ܲ�ѯ.....\n");
		return;
	}

	char name[MAX_NAME_SIZE] = {0};
	printf("������Ҫ��ѯ������:>");
	scanf("%d",name);
	int index = FindByName(pct,name);
	if (index == -1)
	{
		printf("���޴���.....\n");
		return;
	}
	printf("*%-10s%-8s%-8d%-12s%-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
	
	printf("*%-10s%-8s%-8d%-12s%-30s\n",
			pct->data[index].name,
			pct->data[index].sex,
			pct->data[index].age,
			pct->data[index].tel,
		    pct->data[index].addr);
}
//ɾ������
void DelContact(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��.....\n");
		return;
	}
	char name[MAX_NAME_SIZE] = { 0 };
	printf("������Ҫɾ��������:>");
	scanf("%d", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("Ҫɾ�����˲�����.....\n");
		return;
	}
	for (int i = index; i < pct->size;i++)
	{
		pct->data[i] = pct->data[i + 1];
		pct->size--;
	}
}

//�޸ĺ���
void DodifyContact(Contact *pct)
{
	assert(pct != NULL);
	if (pct->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ������޸�.....\n");
		return;
	}
	char name[MAX_NAME_SIZE] = { 0 };
	printf("������Ҫ�޸ĵ�����:>");
	scanf("%d", name);
	int index = FindByName(pct, name);
	if (index == -1)
	{
		printf("Ҫ�޸ĵ��˲�����.....\n");
		return;
	}
	int selset;
	while (selset)
	{
	printf("��Ҫ�޸ĵ���Ϣ(1-���� 2-�Ա� 3-���� 4-�绰 5-סַ)\n");
	scanf("%d", &selset);
	switch (selset)
	{
	case 1:
		printf("������Ҫ�޸ĵ�����:>");
		scanf("%s",pct->data[index].name);
			break;
	case 2:
		printf("������Ҫ�޸ĵ��Ա�:>");
		scanf("%s", pct->data[index].sex);
			break;
	case 3:
		printf("������Ҫ�޸ĵ�����:>");
		scanf("%d", pct->data[index].age);
			break;
	case 4:
		printf("������Ҫ�޸ĵĵ绰:>");
		scanf("%d", pct->data[index].tel);
			break;
	case 5:
		printf("������Ҫ�޸ĵ�סַ:>");
		scanf("%d", pct->data[index].addr);
			break;
	default:
			printf("�޸�ѡ�����������ѡ��\n");
			continue;
	}
	break;
	}
	printf("�޸ĳɹ�......\n");
}

//��պ���
void ClearContact(Contact *pct)
{
	printf("ȷ��Ҫ���ͨѶ¼��(Y/N):>");
	char ch;
	scanf("%c",&ch);
	if (ch == 'N' || ch == 'n')
		return;
	pct->size = 0;
	memset(pct->data, 0, sizeof(pct->data));	
}

//������
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
	printf("����ɹ�.....\n");
}
