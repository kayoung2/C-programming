#include <stdio.h>

int main(void)
{
	int i = 0, sum = 0;

	do
	{
		i++;
		sum += i;
	} while (i < 10);
// i�� 1,2,3,,,9���� ����ǰ� 9�� ���� �� �� �� i=10���� ����ǹǷ� 10���� ���� �� ���� �ؾ� �ȴ�.

	printf("1���� 10������ ���� %d��.\n", sum);

	return 0;
}