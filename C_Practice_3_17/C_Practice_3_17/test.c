#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ100-200֮�������
//����������1�����������ҳ���1�����������⣬���ܱ�����������������
//int main()
//{
//	int i = 100;
//	int a = 2;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (a = 2; a < i; a++)
//		{
//			if (i%a == 0)
//				break;
//		}
//		if (i == a)
//		{
//			printf("%d\n", i);
//			sum++;
//		}
//	}
//	printf("��������Ϊ��%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 100;
//	int a = 2;
//	for (i = 100; i <= 200; i++)
//	{
//		while (a<i)
//		{
//			if (i%a == 0)
//				break;
//			else
//				a++;
//		}
//		if (i == a)
//		{
//			printf("%d\n", i);
//			a = 2;//��2��ʼ��Ϊ2.��Ϊǰ��a�Ѿ�������i;
//		}
//
//	}
//	return 0;
//}

//����˷��ھ���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int a = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a = i*j;
//			printf("%d*%d=%d\t",i,j,a);
//			if (i == j)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//�ж�1000-2000��֮�������
//int main()
//{
//	int year = 0;
//	printf("��������Ҫ�жϵ���ݣ�>");
//	scanf("%d",&year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("%d������", year);
//	else
//		printf("%d��������", year);
//	return 0;
//}

//�����������ͱ�����ֵ��������ֵ�����ݽ��н���
//int main()
//{
//	int a = 8;
//	int b = 9;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}

//�����������ͱ�����ֵ��������ֵ�����ݽ��н���(����������ʱ����)
//int main()
//{
//	int a = 8;
//	int b = 9;
//	int* pa = &a;
//	int* pb = &b;
//	*pa = 9;
//	*pb = 8;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}