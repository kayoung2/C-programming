#include <stdio.h>

int main(void)
{
	int i=123;

	while(i>97) // 소문자 a 는 97이고 z 는 122 이다.
	{
		i--; // 98이 97이 되므로 i<97
		printf("%c ", i);
	}
	
	printf("\n");

	return 0;
}