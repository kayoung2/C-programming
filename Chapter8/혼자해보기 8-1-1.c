#include <stdio.h>
int Division(int a, int b)
{
	int result;
	result = a / b;
	return result;
}
// 함수는 어떤 실행할 것을 미리 만들어 놓는 것

int main()
{
	int x = 100, y = 20;
	int value;
	value = Division(x, y); // main 함수에서 미리 만들어 놓은 함수를 써먹음
	printf("%d와 %d를 나눈 값은 %d \n", x, y, value);

	return 0;
}