#include <stdio.h>

int main (void)
{
	unsigned char secondmask = 64;
	unsigned char fourthmask = 16;

	unsigned char input;

	printf("0 ~ 255 사이의 수를 입력하시오.\n");
// char는 1byte로 8bit, 즉 11111111=255까지 표현 가능하다.
	scanf("%c", &input); // input을 char형으로 선언하였기 때문에 scanf를 쓸 때도 "%c"를 해주어야 한다.

	printf("입력한 값 %d의 두 번째 비트는 %d이다.\n", input, input&secondmask);
// 비트 값을 알아낼 때는 &연산자를 사용하고, 비트 값을 바꿀 때는 ^연산자를 사용한다.

	printf("입력한 값 %d의 네 번째 비트는 %d이다.\n", input, input&fourthmask);

	return 0;
}