#include <stdio.h>

int main(void)
{
	int x = 10, y = 10, z;
	x = y++; // x=y������ ���� ����ǰ�, y++�� ����ȴ�. ��, y++�� ���� �������
// x=10, y=11, z=?
	z = (++x) % 3; // ++x�� ���� ����ȴ�. %�� ������ ����
// x=11, y=11, z=2

	printf("%d %d %d", x, y, z);

	return 0;
}