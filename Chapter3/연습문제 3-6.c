#include <stdio.h>
#define PIE 3.141592 // define 변수명 값을 하면 값이 변수명에 저장된다.

double main(void)
{
	double lee;
	printf("반지름을 설정해주세요.\n");
	scanf("%lf", &lee); // double형 변수는 %lf, float형은 %f

	double ka = lee*lee*PIE;
	printf("반지름이 %lf인 원의 넓이는 %lf이다.\n", lee, ka);

	return 0;
}