#include <stdio.h>

int main(void)
{
	int i, j = 0, k = 1;
	int sum = j + k;

	printf("���� ������ �Է��Ͻÿ�. \n");
	scanf("%d", &i);

	if (i == 0)
	{
		printf("%d ", j);
	}
	else if (i>0 && i <= 1)
	{
		printf("%d %d %d ", j, k, sum);
	}

	else if (i>1)
	{
		printf("%d %d ", j, k);

		while (sum <= i)
		{
			printf("%d ", sum); // printf�� �ڿ� �� ��� i���� Ŭ ���� ��µ�
			j = k;
			k = sum;
			sum = j + k; // sum�� ���� ������ ��� i���� Ŭ ���� ��µ�
		}

		printf("\n");
	}

	else
	{
		printf("���� ������ �ƴմϴ�. \n");
	}

	return 0;
}