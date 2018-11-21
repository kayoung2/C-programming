#include <stdio.h>

int main(void)
{
	int i, j = 0, k = 1;
	int sum = j + k;

	printf("양의 정수를 입력하시오. \n");
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
			printf("%d ", sum); // printf를 뒤에 할 경우 i보다 클 때가 출력됨
			j = k;
			k = sum;
			sum = j + k; // sum을 먼저 정의할 경우 i보다 클 때가 출력됨
		}

		printf("\n");
	}

	else
	{
		printf("양의 정수가 아닙니다. \n");
	}

	return 0;
}