#include <stdio.h>
int Absolute(int a)
{
	if (a > 0) return a;
	else return -a;
}
// ��ȯ���� int�� ������ ������� �ʰ� �Էµ� ������ �̿��� ������ ������ �͵� �ȴ�.

int main()
{
	int x=-486;
	printf("%d�� ������ %d \n", x, Absolute(x));

	return 0;
}