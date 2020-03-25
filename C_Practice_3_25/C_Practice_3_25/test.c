#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
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
//实现函数判断year是不是润年。
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	printf("输入你要判断的年份：>");
//	scanf("%d",&year);
//	if (1 == is_leap_year(year))
//		printf("%d年是闰年\n",year);
//	else
//		printf("%d年不是闰年\n", year);
//	return 0;
//}

//实现一个函数来交换两个整数的内容
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

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表
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
	printf("输入乘法表行数（列数）：>");
	scanf("%d",&i);
	Multiplication_table(i);
	return 0;
}