#include <stdio.h>

int main(void)
{
	int a = 10;
	int*p = &a; // ������ p�� a�� �ּҸ� ��Ÿ����.

	printf("%p\n", p); // a�� �ּ�
	printf("%p\n", &p); // p�� �ּ�
	printf("%d\n", *p); //p�� ����Ű�� �ּ��� ��

	return 0;

}