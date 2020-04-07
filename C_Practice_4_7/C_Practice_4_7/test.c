#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ģ��ʵ�ֿ⺯��strlen
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

//ģ��ʵ�ֿ⺯��strcpy
char* my_strcpy(char* dest, const char* src)
{
	char *ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����

						//��srcָ����ַ���������destָ��Ŀռ��У�����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//����Ŀ�ĵص���ʼ��ַ
}

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left<right)
	{
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left<right) && (arr[left] % 2 == 0))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left<right) && (arr[right] % 2 == 1))
		{
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
		if (left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}