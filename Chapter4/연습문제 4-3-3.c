#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = 20; b = 10;

	a += b;
// a += b 와 같은 것은 a = a + b이다.

	c = ++a; // ++a를 먼저 한 값이 c에 대입된다.
// a=30, b=10, c=31
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	a = b + ++c; // ++c를 먼저 한 값으로 덧셈을 진행한 후 a에 대입된다.
// a=42, b=10, c=32
	printf("a=b+ ++c 문장 실행 후\n");
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	a = b++ + c++; // b+c의 값이 a에 대입된 후, b++ c++이 진행된다.
// a=42, b=11, c=33
	printf("a=b++ + c++ 문장 실행 후\n");
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	return 0;
}