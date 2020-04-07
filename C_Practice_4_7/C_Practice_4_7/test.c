#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//模拟实现库函数strlen
int strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//模拟实现库函数strcpy
char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

						//把src指向的字符串拷贝到dest指向的空间中，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回目的地的起始地址
}

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
		// 从前往后，找到一个偶数，找到后停止
		while ((left<right) && (arr[left] % 2 == 0))
		{
			left++;
		}

		// 从后往前找，找一个奇数，找到后停止
		while ((left<right) && (arr[right] % 2 == 1))
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