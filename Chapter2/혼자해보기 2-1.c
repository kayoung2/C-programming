#include <stdio.h>
int main(void)
{
	int a=20;
	int b=3;
//const int�� �� ���, const�� ������ ���� �ٲ� �� �����Ƿ� ������ �Ұ��ϴ�.
���� int�� �ϰų�, const�� �״�� �ΰ� ���� �ٲ��� �ʾƾ� �Ѵ�.

	printf("���� a�� �ʱ갪�� %d�̴�.\n", a);
	printf("��� b�� �ʱ갪�� %d�̴�.\n", b);

	a=10;
	b=4;

	printf("a�� ���� %d�� �ٲ����.\n",a);
	printf("b�� ���� %d�� �ٲ����.\n", b);
	return 0;
}