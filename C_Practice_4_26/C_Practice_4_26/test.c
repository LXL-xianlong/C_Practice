#define _CRT_SECURE_NO_WARNINGS 1

//����С������
#include<stdio.h> 
int main() 
{ 
	int A, B; 
	scanf("%d%d", &A, &B); 
	int i = 1;
	while (((A * i) % B) != 0) 
	{ 
		i++; 
	}
	printf("%d\n", A*i); return 0; 
}

//�����ַ���
#include <string.h>
void reverse(char* start, char* end)
{ 
	while(start < end) 
	{ 
		char temp = *start; 
		*start = *end;
		*end = temp; 
		start++; 
		end--; } 
}
int main() 
{	char input[100];
	gets(input);
	// ��ת�������� 
	reverse(input, input + strlen(input) - 1); 
	// ��ת���� 
	char* start = input;
	while(*start)
	{ 
		char *end = start;
		while(*end != ' ' && *end!='\0')
			end++; 
		reverse(start, end-1); 
		if(*end) start = end + 1; 
		else
			start = end;
	}
	printf("%s", input);
	return 0; 
}