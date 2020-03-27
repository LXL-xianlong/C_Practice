#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//函数递归题目练习
//递归方式实现打印一个整数的每一位

int Print(int num)
{
	if (num > 9)
	{
		Print(num/10);
	}
	printf("%d ",num%10);
}
//int main()
//{
//	int num = 0;
//	printf("输入一个整数：>");
//	scanf("%d",&num);
//	Print(num);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//1.采用递归
int Factorial(int n)
{
	int ret = 1;
	if (n >= 1)
		return ret = n * Factorial(n - 1);
	else
		return 1;
}
//int main()
//{
//	int n = 0;
//	printf("输入一个整数：>");
//	scanf("%d", &n);
//	printf("%d\n", Factorial(n));
//	return 0;
//}
//采用非递归
int Factorial(int n)
{
	int i = 1;
	int ret = 1;
	for (i = 1; i <= n;i++)
	{
	   ret = ret * i;
	}
	return ret;
}
//int main()
//{
//	int n = 0;
//	printf("输入一个整数：>");
//	scanf("%d", &n);
//	printf("%d\n", Factorial(n));
//	return 0;
//}

//递归和非递归分别实现strlen
//函数递归实现
int my_strlen(char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
//int main()
//{
//	char ch[] = "abcdefg";
//	int len = my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}
//非函数递归实现
int my_strlen(char* str)
{
	int len = 0;
	while (*str != '\0')
	{		
		len++;
		str++;
	}	
	return len;
}
//int main()
//{
//	char ch[] = "abcdef";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数
//非递归方式
//void reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//	printf("%s\n",arr);
//}

//递归方式实现
int reverse_string(char* string)
{
	if (*string == '\0')
	{
		return 0;
	}
	reverse_string(string + 1);
	printf("%c", *string);
	return 0;
}
//int main()
//{
//	char arr[] = { "i love you" };
//	reverse_string(arr);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
int DigitSum(int num)
{
	if (num > 9)
		return DigitSum(num / 10) + num % 10;
	else
		return num;
}
//int main()
//{
//	int num = 0;
//	printf("输入一个整数：>");
//	scanf("%d",&num);
//	printf("%d\n", DigitSum(num)); 
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现
int power(int n,int k)
{
	if (k == 0)
		return 1;
	else if (k>=1)
	{
		return n*power(n,k-1);
	}
}
//int main()
//{
//	int n = 0; 
//	int k = 0;
//	printf("实现n的k次方,输入n和k:>");
//	scanf("%d%d",&n,&k);
//	printf("%d\n", power(n, k));
//	return 0;
//}

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//1.递归实现
int fib(int n)
{
	if (n > 2)
	{
		return fib(n - 1) + fib(n-2);
	}
	return 1;
}
//int main()
//{
//	int n = 1;
//	printf("输入一个非负整数n:>");
//	scanf("%d",&n);
//	printf("%d\n", fib(n));
//	return 0;
//}
//2.非递归实现
int fib(int n)
{
	int a = 1;
	int b = 1;
	int result = 1;
	while (n > 2)
	{
		n--;
		a = b;
		b = result;
		result = a + b;
	}	
	return result;
}
//int main()
//{
//	int n = 1;
//	printf("输入一个非负整数n:>");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}