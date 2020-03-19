#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d\n", func(1));
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//写代码将三个数按从大到小输出
//int test(int x,int y,int z)
//{
//	if (x > y)
//	{
//		if (y > z)
//			printf("由大到小顺序为：%d>%d>%d\n", x, y, z);
//		else
//		{
//			if (x > z)
//				printf("由大到小顺序为：%d>%d>%d\n", x, z, y);
//			else
//				printf("由大到小顺序为：%d>%d>%d\n", z, x, y);
//		}
//	}
//	else
//	{
//		if (x > z)
//			printf("由大到小顺序为：%d>%d>%d\n", y, x, z);
//		else
//		{
//			if(y>z)
//				printf("由大到小顺序为：%d>%d>%d\n", y, z, x);
//			else
//				printf("由大到小顺序为：%d>%d>%d\n", z, y, x);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("请输入三个整数：>");
//	scanf("%d%d%d",&num1,&num2,&num3);
//	test(num1,num2,num3);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	printf("1-100之间所有3的倍数的数字有：\n");
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a, b, t;
//	printf("请输入两个数(a,b)：\n");
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a%b != 0)
//	{
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("最大公约数为：%d\n", b);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 1000;
//	printf("1000年到2000年之间的闰年为：\n");
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ",year);
//	}
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//int main()
//{
//	int i = 100;
//	int a = 2;
//	for (i = 100; i<=200;i++);
//		for (a = 2; a < i; a++)
//		{
//			if (i%a == 0)
//				break;
//		}
//		if (i == a)
//			printf("%d\n",i);
//	}
//	return 0;
//}