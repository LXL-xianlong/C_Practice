#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROW  5
#define COL  5

bool FindNum(int ar[ROW][COL], int key)
{
	//O(N^2)
	for (int i = 0; i<ROW; ++i)
	{
		for (int j = 0; j<COL; ++j)
		{
			if (ar[i][j] == key)
				return true;
		}
	}
	return false;
}

void main()
{
	int ar[ROW][COL] = {
		{ 1,  3,  5,  7,  9 },
		{ 2,  4,  6,  8,  10 },
		{ 11, 13, 15, 17, 19 },
		{ 21, 23, 25, 27 ,29 },
		{ 31, 33, 35, 37, 39 }
	};

	int key = 230;
	bool flag = FindNum(ar, key);
	if (flag)
		printf("key %d found.\n", key);
	else
		printf("key %d not found.\n", key);
}

/*
int my_atoi(const char *str)
{
assert(str != NULL);
//�����ո�
while(*str == ' ')
str++;
int flag = 1; //����λ. str��������λ
if(*str == '-')
{
flag = -1;
str++;
}
else if(*str == '+')
str++;
long long res = 0;
while(*str != '\0')
{
if(*str<'0' || *str>'9') // �ַ��������֣������ַ�����Ч
break;
res = res * 10 + (*str-'0');  //4194
if(res>INT_MAX || -res<INT_MIN)
return 0;
str++;
}
return flag*res;
}
void main()
{
char *str = "0x8401814";
int res1 = atoi(str);  //4194
printf("res1 = %d\n", res1);
int res2 = my_atoi(str);  //4194  //Ҫ��֧��16���Ƶļ���
printf("res2 = %d\n", res2);
}
/*
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε�����
void FindNumber(int ar[], int n, int *num1, int *num2)
{
int res = 0;
for(int i=0; i<n; ++i)
{
res ^= ar[i];   //0101 ==> 3  6
}
//�ָ���
int pos = 0;
for(int i=0; i<32; ++i)
{
if(res & (1<<i))
{
pos = i;
break;
}
}
*num1 = 0;
*num2 = 0;
for(int i=0; i<n; ++i)
{
if(ar[i] & (1<<pos))  //��ʾar[i]��posΪ1  1 1 2 3 3
{
*num1 ^= ar[i];
}
else                  //��ʾar[i]��posΪ0 4 4  5 5 6
{
*num2 ^= ar[i];
}
}
}
void main()
{
//0000 0000 0000 0000 0000 0000 0000 0011   3 ^
//0000 0000 0000 0000 0000 0000 0000 0110   6
//0000 0000 0000 0000 0000 0000 0000 0101
int ar[] = {1,2,4,3,0,5,5,4,3,1};
int n = sizeof(ar) / sizeof(ar[0]);
int num1, num2;
FindNumber(ar, n, &num1, &num2);
printf("num1 = %d, num2 = %d\n", num1, num2);
}
/*
int FindNumber(int ar[], int n)
{
int res = 0;
for(int i=0; i<n; ++i)
{
res ^= ar[i];
}
return res;
}
void main()
{
//0011   3 ^
//0110   6
//0101
int ar[] = {1,2,4,6,5,5,4,3,2,1};
int n = sizeof(ar) / sizeof(ar[0]);
printf("value = %d\n", FindNumber(ar, n));
}
/*
int FindNumber(int ar[], int n)
{
int res = 0;
for(int i=0; i<n; ++i)
{
res ^= ar[i];
}
return res;
}
void main()
{
//0011   3 ^ 3
//0011
int ar[] = {1,2,4,5,5,4,3,2,1};
int n = sizeof(ar) / sizeof(ar[0]);
printf("value = %d\n", FindNumber(ar, n));
}
/*
//����������ʽ
int FindNumber(int ar[], int n)
{
int j;
for(int i=0; i<n; ++i)
{
for(j=0; j<n; ++j)
{
if(i!=j && ar[i] == ar[j])
break;
}
if(j >= n)
return ar[i];
}
}
void main()
{
int ar[] = {1,2,4,5,5,4,3,2,1};
int n = sizeof(ar) / sizeof(ar[0]);
printf("value = %d\n", FindNumber(ar, n));
}
/*
#define swapintbit(n) ((((n)&0x55555555)<<1) | (((n)&0xaaaaaaaa)>>1))
void main()
{
int n = -5;
printf("%d\n", swapintbit(n));
//1000 0000 0000 0000 0000 0000 0000 1001  -9
//1111 1111 1111 1111 1111 1111 1111 0111  -9�Ĳ���
//1000 0000 0000 0000 0000 0000 0000 0101
//1111 1111 1111 1111 1111 1111 1111 1011  -5�Ĳ���
}
/*
void main()
{
int a = -5; // 1000 0000 0000 0000 0000 0000 0000 0101
// 1111 1111 1111 1111 1111 1111 1111 1110
// 1111 1111 1111 1111 1111 1111 1111 1101
// 1000 0000 0000 0000 0000 0000 0000 0010
int res = a >> 2;  //-5 / 2^1
printf("%d\n", res);
}
/*
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//дһ���꣬���Խ�һ�������ֵ�����λ��ż��λ����
#define swapintbit(n) ((((n)&0x55555555)<<1) | (((n)&0xaaaaaaaa)>>1))
void main()
{
// 1000 0100 0111 0111 0010 0110 0010 1011  //value
// 0101 0101 0101 0101 0101 0101 0101 0101   //0x55555555
// 0000 0100 0101 0101 0000 0100 0000 0001   //����
// 0000 1000 1010 1010 0000 1000 0000 0010   //����<<1
// 0000 0100 0111 0111 0010 0110 0010 1011  //value
// 1010 1010 1010 1010 1010 1010 1010 1010  //0xaaaaaaaa
// 0000 0000 0010 0010 0010 0010 0010 1010  //ż��
// 0000 0000 0001 0001 0001 0001 0001 0101  //ż�� >> 1
// 0000 1000 1010 1010 0000 1000 0000 0010   //����<<1
// 0000 0000 0001 0001 0001 0001 0001 0101   //ż�� >> 1
// 0000 1000 1011 1011 0001 1001 0001 0111
// 0000 0100 0111 0111 0010 0110 0010 1011  //value
// 0101 0101 0101 0101 0101 0101 0101 0101|0 //0xAA AA AA AA >> 1
//size_t value = 12345;
int value = 74917419;
printf("swapintbit value = %d\n", swapintbit(value));
}
/*
typedef struct Test
{
double c;//8
int a;  //0~4
char b; //1 + 3
}Test;
#define offsetof(struct_type, member_name) (size_t)&(((struct_type*)0)->member_name)
void main()
{
Test t;
printf("offset = %d\n", (size_t)&t.a - (size_t)&t);  //
}
/*
//
void main()
{
printf("offset = %d\n", offsetof(Test, b));
}
/*
void main()
{
Test t;
printf("&t = %p\n", &t);
printf("&a = %p\n", &(t.a));
printf("&b = %p\n", &(t.b));
printf("&c = %p\n", &(t.c));
}
*/