#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 10; i++)
	{
		if (i % 2 != 0) continue; // Ȧ���� �Ʒ� ������ �������� �ʰ� ���������� �̵��Ѵ�.
		sum += i;
	}

	printf("1���� 10���� ¦���� ���� %d��.\n", sum);
	return 0;
}