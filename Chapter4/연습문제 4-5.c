#include <stdio.h>

int main(void)
{
	int lee, ka;
	
	printf("정수 2개를 입력하세요 : ");
	scanf("%d %d", &lee, &ka);

	printf("두 정수로 AND 비트 논리 연산을 수행하면 결과값은 %d이다.\n", lee&ka);
// AND 비트 논리 연산은 둘 다 1 일 때, 1을 출력한다.
	printf("두 정수로 OR 비트 논리 연산을 수행하면 결과값은 %d이다.\n", lee|ka);
// OR 비트 논리 연산은 둘 다 0 일 때, 0을 출력한다.
	printf("두 정수로 XOR 비트 논리 연산을 수행하면 결과값은 %d이다.\n", lee^ka);
// XOR 비트 논리 연산은 둘이 같으면 0, 다르면 1을 출력한다.

	return 0;
}