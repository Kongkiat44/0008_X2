#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int X1, X2, S;
	scanf_s("%d %d", &X1, &S);
	X2 = (2 * S) - X1;
	printf("%d", X2);
	return 0;
}