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
	printf("선언된 배열 a의 평균은 %d이다.\n", average);

	int variance=0;
	for (int i = 0; i < 6; i++)
	{
		variance += (a[i] - average)*(a[i] - average);
	}

	printf("선언된 배열 a의 분산은 %d이다.\n", variance / 6);
// 분산은 평균과의 오차의 제곱을 전부 더한 값의 평균이다.

	return 0;
}