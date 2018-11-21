#include <stdio.h>
int main(void)
{
	char a='f';
	char b=104;
//104를 %c로 출력할 경우, 아스키 코드로 변환되어 나온다.
예를 들어 96을 %c로 출력하면 '가 출력된다.

	printf("변수 a는 %c로 값이 %d다.\n", a, a);
	printf("변수 b는 %d로 문자 %c다.\n", b, b);

	return 0;
}