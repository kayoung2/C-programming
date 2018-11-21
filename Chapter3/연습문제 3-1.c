#include <stdio.h>

int main (void)
{
	int number=67;

	printf("%d을 8진수로 변환하면 %o이다.\n", number, number);
	printf("%d을 10진수로 변환하면 %d이다.\n", number, number);
	printf("%d을 16진수로 변환하면 %x이다.\n", number, number);
	printf("%d을 문자형으로 변환하면 %c이다.\n", number, number);
// 10진수 %d, 8진수 %o, 16진수 %x, 지수 %e, 실수 %f, 문자 1개 %c, 문자열 %s

	return 0;
}