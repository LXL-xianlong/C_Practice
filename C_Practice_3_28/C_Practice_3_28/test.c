#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));//16
//	return 0;
//}

//实现一个对整形数组的冒泡排序
void BubbleSet(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1;i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入需要10个整数：>");
//	for (i = 0; i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	BubbleSet(arr,sz);
//	printf("输入数字升序排列为：\n");
//	PrintArr(arr,sz);
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz;i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
//int main()
//{
//	int arr[] = {1,5,2,4,8,6,9,7,3,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//数组初始化全为0；
//	printf("数组元素逆置前：");
//	Print(arr, sz);
//	Reverse(arr, sz);
//	printf("数组元素逆置后：");
//	Print(arr,sz);
//
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
void PrintArr(int arr[])
{
	int i = 0;
	for (i = 0; i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[10] = {2,2,2,2,2,3,3,3,3,3};
	int arr2[10] = {8,8,8,8,8,7,7,7,7,7};
	int i = 0;
	for (i = 0; i<10; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("arr1[10]:");
	PrintArr(arr1);
	printf("arr2[10]:");
	PrintArr(arr2);
	return 0;
}