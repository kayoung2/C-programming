#include <stdio.h>

int main(void)
{
	int i = 0, sum = 0;

	do
	{
		i++;
		sum += i;
	} while (i < 10);
// i가 1,2,3,,,9까지 실행되고 9일 때도 한 번 더 i=10으로 시행되므로 10보다 작을 때 까지 해야 된다.

	printf("1부터 10까지의 합은 %d다.\n", sum);

	return 0;
}