#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//在屏幕上打印杨辉三角
//void Triangle(int n)
//{
//	int i = 0;
//	int j = 0;
//	int arr[20][20] = {1};
//
//	for (i = 1; i <= n;i++)
//	{
//		arr[i][0] = 1;
//		for (j = 1; j <= i;j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i <= n;i++)
//	{
//		for (j = 0; j <= i;j++)
//		{
//			printf("%-2d  ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	Triangle(n);
//
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	int murder[4] = {0};//默认4个人都不是凶手
//
//	int i = 0;
//	//遍历四个嫌疑人
//	for (i = 0; i < 4;i++)
//	{
//		murder[i] = 1;//假设为凶手
//		//判断是不是凶手
//		if ((murder[0] != 1)+
//			(murder[2] == 1)+
//			(murder[3] == 1)+
//			(murder[3] != 1)==3)
//		{
//			break;//凶手就是i
//		}
//		else
//			murder[i] = 0;//i不是凶手
//	}
//	putchar('A' + i);//输出凶手编号
//	return 0;
//}


//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left<right)
	{
		// 从前往后，找到一个奇数，找到后停止
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// 从后往前找，找一个偶数，找到后停止
		while((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
		// 然后继续找，直到两个指针相遇
		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[10] = {0,5,8,7,5,2,4,9,10,44};
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap_arr(arr,sz);
	int i = 0;
	for (i = 0; i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
