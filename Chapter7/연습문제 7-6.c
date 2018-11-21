#include <stdio.h>

int main(void)
{
	char str[] = "code";
	char stri[5];

	for (int i = 0; i < 4; i++)
	{
		scanf("%c", &stri[i]);
// 비밀번호를 입력받는 시스템이다. stri[4]=/0 이므로 비워둔다.
	}

	int index = 0;
	for (int j = 0; str[j]; j++)
	{
		if (stri[j] == str[j]) continue;
// 비밀번호가 같다면 index를 증가시키지 않는다.
			index++;
	}

	if (index == 0)
		printf("프로그램을 종료합니다.\n");

	else
		printf("비밀번호가 틀립니다.\n");

	return 0;
}