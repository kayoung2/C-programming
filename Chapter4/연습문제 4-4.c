#include <stdio.h>

int main(void)
{
	int lee, ka, young, lky;

	printf("정수 3개를 입력하세요 : ");
	scanf("%d %d %d", &lee, &ka, &young);

	lky=lee+ka+young>100;
// 세 정수의 합이 100보다 크면 1, 아니면 0

	if (lky==1) // c언어에서 같다는 기호는 ==
		printf("결과는 %d, 합격\n", lky);
	else
		printf("결과는 %d, 불합격\n", lky);

	return 0;
}