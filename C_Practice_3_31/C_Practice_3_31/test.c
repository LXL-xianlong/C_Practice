#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入俩整数：>");
//	scanf("%d%d",&a,&b);
//	printf("交换前:a = %d b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("交换后:a = %d b = %d\n", a, b);
//	return 0;
//}

//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
int number_one(unsigned int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i<32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	return count;
}

//int main()
//{
//	int a = 0;
//	printf("输入一个整数：>");
//	scanf("%d", &a);
//	int ret = number_one(a);
//	printf("%d的二进制中1的个数为：%d\n",a,ret);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
void Printbit(int a)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
}

//int main()
//{
//	int a = 0;
//	printf("输入一个整数：>");
//	scanf("%d", &a);
//	Printbit(a);
//
//	return 0;
//}

//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子:
//1999 2299
//输出例子 : 7

void Diff_Bit(int a, int b)
{
	int c = a^b;
	int i = 0;
	int count = 0;
	for (i = 0; i < 32;i++)
	{
		if (((c >> i) & 1)==1)
		{
			count++;
		}
	}
	printf("有%d个位(bit)不同",count);
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("输入俩整数：>");
	scanf("%d%d",&num1,&num2);
	Diff_Bit(num1,num2);
	return 0;
}