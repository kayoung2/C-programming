#include <stdio.h>

int main(void)
{
	int a[6] = { 45,20,5,9,30,15 };
	int sum = 0;

	for (int i = 0; i < 6; i++)
	{
		sum += a[i];
	}

	int average = sum / 6;
	printf("����� �迭 a�� ����� %d�̴�.\n", average);

	int variance=0;
	for (int i = 0; i < 6; i++)
	{
		variance += (a[i] - average)*(a[i] - average);
	}

	printf("����� �迭 a�� �л��� %d�̴�.\n", variance / 6);
// �л��� ��հ��� ������ ������ ���� ���� ���� ����̴�.

	return 0;
}