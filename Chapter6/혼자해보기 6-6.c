#include <stdio.h>

int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 10; i++)
	{
		if (i % 2 != 0) continue; // 홀수면 아래 문장을 진행하지 않고 증감식으로 이동한다.
		sum += i;
	}

	printf("1부터 10까지 짝수의 합은 %d다.\n", sum);
	return 0;
}