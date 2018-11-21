#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, c = 0;
	printf("%d\n", a >= b || c);
// ||는 좌우 둘 중 하나라도 참이면 1, 둘 다 거짓이면 0을 출력한다.
이 때, c는 0이므로 참값이 아니라 0말고 모든 수가 참값이다.
}