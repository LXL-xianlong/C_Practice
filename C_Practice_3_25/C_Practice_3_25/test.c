#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//int is_prime(int x)
//{
//	int a = 2;
//	for (a = 2; a < x;a++)
//	{
//		if (x%a == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 200;i++)
//	{
//		if (1==is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//ʵ�ֺ����ж�year�ǲ������ꡣ
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	printf("������Ҫ�жϵ���ݣ�>");
//	scanf("%d",&year);
//	if (1 == is_leap_year(year))
//		printf("%d��������\n",year);
//	else
//		printf("%d�겻������\n", year);
//	return 0;
//}

//ʵ��һ��������������������������
//void swap(int* px,int* py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int num1 = 3;
//	int num2 = 4;
//	swap(&num1,&num2);
//	printf("num1=%d\n",num1);
//	printf("num2=%d\n", num2);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
void Multiplication_table(int x)
{
	int i = 1;
	int j = 1;
	for (i = 1; i <= x;i++)
	{
		for (j = 1; j <= i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 1;
	printf("����˷�����������������>");
	scanf("%d",&i);
	Multiplication_table(i);
	return 0;
}