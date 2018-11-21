#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 5; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
// 조건문은 이 조건이 성립 안 할 때까지 계속 실행하는 것이다. 그러니까.. 성립하면 실행! 안 하면 그만!
		{
			printf("*");
		}
// 이 두번째 for문이 끝나고나면 첫번째 for문으롣 돌아가 i가 5->4->... 이렇게 되는데 다시 두번째 for문의 j는 1
		printf("\n");
	}

	return 0;
}