#include <stdio.h>

int main(void)
{
	char subject[] = "English";
	int i = 0;

	printf("반복문을 이용해서 문자열을 출력합니다.\n");

	while (subject[i]) // subject[i]가 /0이 되면 중단
		putchar(subject[i++]); // while문도 바로 뒤 문장만 시행
// putchar(subject[++i])를 해버리면 nglish 출력, subject[1]~
	printf("\n");

	return 0;
}