#include <stdio.h>

int main(void)
{
	int number, i;

	printf("반복 횟수를 입력하세요 : ");
	scanf("%d", &number);

	printf("for문 예제입니다!!\n");

	for(i=1;i<=number;i++) // i가 1부터이므로 number가 될 때까지 반복이 된다.
	{
		printf("%d번 반복입니다!!\n", i);
// for문이므로 number가 5이면 5번 반복입니다!! 이 문장 한번만 뜨는 게 아니라, 1번 2번 ...5번까지 5문장이 뜬다.
	}

	return 0;
}