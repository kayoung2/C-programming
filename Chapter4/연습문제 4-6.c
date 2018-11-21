#include <stdio.h>

int main(void)
{
	unsigned int lee;
	unsigned char ka=128;
	unsigned char young=16;

	printf("정수를 입력하세요 : ");
	scanf("%d", &lee);
// %c로 할 경우 숫자를 아스키 코드로 받아들이기 때문에 %d로 해야한다.

	printf("입력한 정수의 첫 번째 비트 값은 %d입니다.\n", (lee&ka)==ka);
// 확실히 하기 위해서 괄호를 쳐야 한다!!
	printf("입력한 정수의 네 번째 비트 값은 %d입니다.\n", (lee&young)==young);

	return 0;
}