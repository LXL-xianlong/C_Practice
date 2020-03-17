#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印100-200之间的素数
//素数：大于1的正整数，且除了1和其自身以外，不能被其他正整数整除；
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
//	printf("素数总数为：%d\n", sum);
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
//			a = 2;//将2初始化为2.因为前面a已经等于了i;
//		}
//
//	}
//	return 0;
//}

//输出乘法口诀表；
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

//判断1000-2000年之间的闰年
//int main()
//{
//	int year = 0;
//	printf("请输入您要判断的年份：>");
//	scanf("%d",&year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("%d是闰年", year);
//	else
//		printf("%d不是闰年", year);
//	return 0;
//}

//给定两个整型变量的值，将两个值的内容进行交换
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

//给定两个整型变量的值，将两个值的内容进行交换(不允许创建临时变量)
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