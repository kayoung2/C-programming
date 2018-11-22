#include <stdio.h>
int MultiTwo(int a, int b)
{
	return a*b;
}
int Big(int a, int b)
{
	if (a > b) return a;
	else return b;
}
int MultiTwo(int a, int b);
int Big(int a, int b);
// 함수를 선언하기 위해서는 먼저 함수를 정의해야 한다.
int main()
{
	int value1 = MultiTwo(1357, 9);
	int value2 = Big(123, 456);

	printf("1357과 9를 MultiTwo 실행하면 %d값이 나온다.\n", value1);
	printf("123과 456을 Big 실행하면 %d값이 나온다.\n", value2);

	return 0;
}