#include <stdio.h>

int main(void)
{
	int i, j, index, input;

	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &input);

	for (i = 0; i <= input; i++) // input(�ʱⰪ)���� ���� �� ���
	{
		index = 0;

		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
				index++;
		}

		if (index == 2) // 1�� �ڱ��ڽ����θ� �������� ��, �� �Ҽ� ���
			printf("%d\n", i);
	}

	return 0;
}