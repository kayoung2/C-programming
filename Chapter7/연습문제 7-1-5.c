#include <stdio.h>

int main(void)
{
	char name[] = "Peter";

	printf("반복문을 이용해서 문자열을 출력합니다.\n");
	for (int i = 0; i < 6; i++)
// i 선언, name[0]~name[5], name[5]=/0
		printf("%c", name[i]);
	printf("\n"); // for는 바로 뒤 문장만 시행

	return 0;
}