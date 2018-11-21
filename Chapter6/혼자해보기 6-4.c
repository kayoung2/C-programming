#include <stdio.h>

int main(void)
{
	int i, j, index, input;

	printf("임의의 정수를 입력하세요 : ");
	scanf("%d", &input);

	for (i = 0; i <= input; i++) // input(초기값)보다 작은 수 출력
	{
		index = 0;

		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
				index++;
		}

		if (index == 2) // 1과 자기자신으로만 나눠지는 수, 즉 소수 출력
			printf("%d\n", i);
	}

	return 0;
}