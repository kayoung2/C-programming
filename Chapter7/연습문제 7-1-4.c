#include <stdio.h>

int main(void)
{
	int a[3] = { 4,5,10 };
	int sum = 0;

	printf("배열의 원소를 모두 더합니다.\n");

	for (int i = 0; i <= 2; i++)
// i를 선언해주어야 한다. a[0]~a[2]이므로 i=0, i<=2
	{
		sum += a[i];
	}

	printf("결과는 %d입니다.\n", sum);
	return 0;
}