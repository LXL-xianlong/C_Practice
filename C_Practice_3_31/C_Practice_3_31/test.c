#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������ʱ������������������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������>");
//	scanf("%d%d",&a,&b);
//	printf("����ǰ:a = %d b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������:a = %d b = %d\n", a, b);
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
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
//	printf("����һ��������>");
//	scanf("%d", &a);
//	int ret = number_one(a);
//	printf("%d�Ķ�������1�ĸ���Ϊ��%d\n",a,ret);
//	return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
//	printf("����һ��������>");
//	scanf("%d", &a);
//	Printbit(a);
//
//	return 0;
//}

//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������:
//1999 2299
//������� : 7

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
	printf("��%d��λ(bit)��ͬ",count);
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("������������>");
	scanf("%d%d",&num1,&num2);
	Diff_Bit(num1,num2);
	return 0;
}