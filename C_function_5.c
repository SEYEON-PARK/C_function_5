#include <stdio.h>

int sub(int a, int b); //함수원형을 사용하여 메인 코드 앞을 간단하게 만들기.

int main(void)
{
	int A, B, Result;

	printf("두 개의 정수를 입력하시오. : ");
	scanf_s("%d %d", &A, &B);

	Result = sub(A, B);
	printf("%d\n", Result);

	return 0;
}
int sub(int a, int b)
{
	return a - b;
}