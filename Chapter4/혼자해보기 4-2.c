#include <stdio.h>

int main(void)
{
	int length, height;
	printf("삼각형의 밑변과 높이를 입력하시오.");
	scanf("%d %d", &length, &height);
// scanf를 사용할 때 입력해주는 인자 앞에 &를 꼭 붙여주어야 한다 !!!

	int area=length*height/2;
	printf("삼각형의 넓이는 %d다.", area);

	return 0;
}