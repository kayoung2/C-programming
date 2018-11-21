#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, c = 0;
	printf("%d\n", a < b && a < c);
// &&는 양쪽이 모두 참일 때 1을 둘 중 하나라도 거짓이라면 0을 출력한다.
}