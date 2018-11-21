#include <stdio.h>

int main(void)
{
	int x = 5, y = 3;
	const int z = 3;
	x = x + 5;
	x = y + 3;
// y + 3 = x;의 경우 좌변, 즉 lvalue는 값을 저장할 수 있는 메모리만을 나타내야 하기 때문에 실행이 안된다.
y+3과 같은 수식의 결과는 메모리를 나타내는 것이 아니다.
// z = z + 4;의 경우 z는 고정값이므로 변경할 수 없어 실행이 안된다.

	printf("%d %d %d", x, y, z);
}