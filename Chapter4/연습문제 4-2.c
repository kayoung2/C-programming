#include <stdio.h>

int main(void)
{
	int x = 10, y = 10, z;
	x = y++; // x=y연산이 먼저 실행되고, y++이 실행된다. 즉, y++는 다음 문장부터
// x=10, y=11, z=?
	z = (++x) % 3; // ++x가 먼저 실행된다. %는 나머지 연산
// x=11, y=11, z=2

	printf("%d %d %d", x, y, z);

	return 0;
}