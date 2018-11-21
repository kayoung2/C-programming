#include <stdio.h>

int main (void)
{
	int number;

	printf("임의의 수를 입력해주세요.\n");
	scanf("%d", &number);

	printf("입력한 수는 %d입니다.\n", number);

	if (0<=number)
	{
		if (number%5==0) // %연산자는 나머지를 출력해주는 연산자이다.
			printf("입력한 수 %d는 5의 배수입니다.\n", number);
		else
			printf("입력한 수 %d는 5의 배수가 아닙니다.\n", number);
	}

	else
		printf("입력한 수 %d는 음수입니다.\n", number);
// 한 문장을 끝낼 때 꼭 ; 입력하기 !!!

	return 0;
}