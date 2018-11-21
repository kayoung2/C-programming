#include <stdio.h>
#define ROOT 0.86605
#define PIE 3.141592

int main(void)
{
	int lee, ka;
	printf("정삼각형, 정사각형의 한 변 또는 원의 반지름을 입력하시오 : ");
	scanf("%d", &lee);

	printf("정삼각형의 넓이를 구하고 싶으면 1, 정사각형의 넓이를 구하고 싶으면 2, 원의 넓이를 구하고 싶으면 3을 입력하시오 : ");
	scanf("%d", &ka);

	if(ka==1)
		printf("정삼각형의 넓이는 %f입니다.\n", lee*lee*ROOT);
// 실수를 곱하게 되므로 실수가 나와야 한다. %d가 아니라 %f로 할 것.
	else if(ka==2)
		printf("정사각형의 넓이는 %f입니다.\n", lee*lee);
	else if(ka==3)
		printf("원의 넓이는 %f입니다.\n", lee*lee*PIE);
	else
		printf("1,2,3 중 하나를 입력하시오.\n");

	return 0;
}