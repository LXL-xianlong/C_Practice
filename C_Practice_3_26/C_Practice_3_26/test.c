#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�����ݹ���Ŀ��ϰ
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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
//	printf("����һ��������>");
//	scanf("%d",&num);
//	Print(num);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//1.���õݹ�
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
//	printf("����һ��������>");
//	scanf("%d", &n);
//	printf("%d\n", Factorial(n));
//	return 0;
//}
//���÷ǵݹ�
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
//	printf("����һ��������>");
//	scanf("%d", &n);
//	printf("%d\n", Factorial(n));
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�����ݹ�ʵ��
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
//�Ǻ����ݹ�ʵ��
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�����������
//�ǵݹ鷽ʽ
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

//�ݹ鷽ʽʵ��
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

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//	printf("����һ��������>");
//	scanf("%d",&num);
//	printf("%d\n", DigitSum(num)); 
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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
//	printf("ʵ��n��k�η�,����n��k:>");
//	scanf("%d%d",&n,&k);
//	printf("%d\n", power(n, k));
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//1.�ݹ�ʵ��
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
//	printf("����һ���Ǹ�����n:>");
//	scanf("%d",&n);
//	printf("%d\n", fib(n));
//	return 0;
//}
//2.�ǵݹ�ʵ��
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
//	printf("����һ���Ǹ�����n:>");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}