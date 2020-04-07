#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
//void PrintArr(int *arr,int sz)
//{
//	int i = 0;
//	
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PrintArr(arr,sz);
//}

//写一个函数，可以逆序一个字符串的内容
//#include<string.h>
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//int main()
//{
//	char str[100] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		
//	}
//	return 0;
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d",&num);
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < 5;i++)
//	{
//		tmp = tmp * 10 + num;
//		sum = sum + tmp;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//用C语言在屏幕上输出菱形图案：
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
					   
	for (i = 0; i<line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i<line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//判断i是否为水仙花数
		//1. 求判断数字的位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. 计算每一位的次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. 判断
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}