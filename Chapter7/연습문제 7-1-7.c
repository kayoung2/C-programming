#include <stdio.h>

int main(void)
{
	int aryTmp[] = { 10,20,30,40 };
	int i, aryLength;

	aryLength = sizeof(aryTmp) / sizeof(int);
// sizeof(aryTmp)는 배열의 전체 바이트수고 sizeof(int)는 배열 자료형의 바이트수이다.
따라서 sizeof(aryTmp)/sizeof(int)를 하면 배열의 원소 개수를 나타낸다.

	printf("배열명을 이용해서 주소를 출력합니다.\n");

	for (i = 0; i < aryLength; i++)
		printf("aryTmp의 %d번째 주소는 %p이다.\n", i + 1, &aryTmp[i]);

// 배열은 0부터 시작하므로 i+1을 출력해야 한다.
또 배열의 주소를 나타내기 위해서는 aryTmp+i또는 &aryTmp[i]를 사용해야 한다.

	return 0;
}