#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个函数可以找出两个整数中的最大值。

int get_max(int x, int y) {
	return (x>y) ? (x) : (y);
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("max = %d\n", max);
	return 0;
}

void Swap1(int x, int y) {
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}