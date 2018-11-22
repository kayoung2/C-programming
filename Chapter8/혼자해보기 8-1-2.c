#include <stdio.h>
int Absolute(int a)
{
	if (a > 0) return a;
	else return -a;
}
// 반환값에 int형 변수를 사용하지 않고 입력된 변수를 이용한 간단한 수식이 와도 된다.

int main()
{
	int x=-486;
	printf("%d의 절댓값은 %d \n", x, Absolute(x));

	return 0;
}