#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = 20; b = 10;

	a += b;
// a += b �� ���� ���� a = a + b�̴�.

	c = ++a; // ++a�� ���� �� ���� c�� ���Եȴ�.
// a=30, b=10, c=31
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	a = b + ++c; // ++c�� ���� �� ������ ������ ������ �� a�� ���Եȴ�.
// a=42, b=10, c=32
	printf("a=b+ ++c ���� ���� ��\n");
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	a = b++ + c++; // b+c�� ���� a�� ���Ե� ��, b++ c++�� ����ȴ�.
// a=42, b=11, c=33
	printf("a=b++ + c++ ���� ���� ��\n");
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	return 0;
}