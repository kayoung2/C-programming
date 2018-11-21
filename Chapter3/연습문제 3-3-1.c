#include <stdio.h>

int main(void)
{
	int lee;

	printf("문자 하나를 입력하세요.\n");
	lee = getchar(); //입출력 함수 getchar, putchar

	printf("입력한 문자 : ");
	putchar(lee);

	return 0;
}