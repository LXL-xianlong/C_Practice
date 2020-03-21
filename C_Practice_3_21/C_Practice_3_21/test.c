#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//编写程序数一下 编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100;i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//	}
//	printf(" 1到 100 的所有整数中数字9有%d个\n",count);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ",i,j,i*j);
//			if (i == j)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	double sum = 0;
//	int i = 1;
//	double t = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		t = pow(-1,i+1);
//		sum = sum + t/i;
//	}
//	printf("%f\n", sum);
//	return 0;
//}

//求10 个整数中最大值
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int max = 0;
	printf("请输入10个整数：>");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);
	return 0;
}

