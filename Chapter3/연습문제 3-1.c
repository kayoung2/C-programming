#include <stdio.h>

int main (void)
{
	int number=67;

	printf("%d�� 8������ ��ȯ�ϸ� %o�̴�.\n", number, number);
	printf("%d�� 10������ ��ȯ�ϸ� %d�̴�.\n", number, number);
	printf("%d�� 16������ ��ȯ�ϸ� %x�̴�.\n", number, number);
	printf("%d�� ���������� ��ȯ�ϸ� %c�̴�.\n", number, number);
// 10���� %d, 8���� %o, 16���� %x, ���� %e, �Ǽ� %f, ���� 1�� %c, ���ڿ� %s

	return 0;
}