#include <stdio.h>

int main(void)
{
	int a[3] = { 4,5,10 };
	int sum = 0;

	printf("�迭�� ���Ҹ� ��� ���մϴ�.\n");

	for (int i = 0; i <= 2; i++)
// i�� �������־�� �Ѵ�. a[0]~a[2]�̹Ƿ� i=0, i<=2
	{
		sum += a[i];
	}

	printf("����� %d�Դϴ�.\n", sum);
	return 0;
}