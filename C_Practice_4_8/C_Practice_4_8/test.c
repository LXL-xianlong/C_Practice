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

//����Ļ�ϴ�ӡ�������
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

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//int main()
//{
//	int murder[4] = {0};//Ĭ��4���˶���������
//
//	int i = 0;
//	//�����ĸ�������
//	for (i = 0; i < 4;i++)
//	{
//		murder[i] = 1;//����Ϊ����
//		//�ж��ǲ�������
//		if ((murder[0] != 1)+
//			(murder[2] == 1)+
//			(murder[3] == 1)+
//			(murder[3] != 1)==3)
//		{
//			break;//���־���i
//		}
//		else
//			murder[i] = 0;//i��������
//	}
//	putchar('A' + i);//������ֱ��
//	return 0;
//}


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
		// ��ǰ�����ҵ�һ���������ҵ���ֹͣ
		while ((left<right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ��ż�����ҵ���ֹͣ
		while((left<right) && (arr[right] % 2 == 0))
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
