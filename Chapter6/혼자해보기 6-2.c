#include <stdio.h>

int main(void)
{
	int i;
	for(i=97;i<=122;i++) // 아스키 코드로 a는 97, z는 122이다. 대문자 A는 65, Z는 90이다.
	{
		printf("%c",i);
// i를 출력하고 싶다면 %d 또는 %c 같은 부호를 입력해야한다. 만약 "c"이렇게 입력한다면 c만 26개가 입력된다.
	}

	return 0;
}