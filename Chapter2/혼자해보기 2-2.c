#include <stdio.h>
int main(void)
{
	char a='f';
	char b=104;
//104�� %c�� ����� ���, �ƽ�Ű �ڵ�� ��ȯ�Ǿ� ���´�.
���� ��� 96�� %c�� ����ϸ� '�� ��µȴ�.

	printf("���� a�� %c�� ���� %d��.\n", a, a);
	printf("���� b�� %d�� ���� %c��.\n", b, b);

	return 0;
}