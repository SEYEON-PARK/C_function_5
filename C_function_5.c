#include <stdio.h>

int sub(int a, int b); //�Լ������� ����Ͽ� ���� �ڵ� ���� �����ϰ� �����.

int main(void)
{
	int A, B, Result;

	printf("�� ���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d %d", &A, &B);

	Result = sub(A, B);
	printf("%d\n", Result);

	return 0;
}
int sub(int a, int b)
{
	return a - b;
}