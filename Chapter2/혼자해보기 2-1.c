#include <stdio.h>
int main(void)
{
	int a=20;
	int b=3;
//const int로 할 경우, const를 넣으면 값을 바꿀 수 없으므로 실행이 불가하다.
따라서 int로 하거나, const를 그대로 두고 값을 바꾸지 않아야 한다.

	printf("변수 a의 초깃값은 %d이다.\n", a);
	printf("상수 b의 초깃값은 %d이다.\n", b);

	a=10;
	b=4;

	printf("a의 값은 %d로 바뀌었다.\n",a);
	printf("b의 값은 %d로 바뀌었다.\n", b);
	return 0;
}