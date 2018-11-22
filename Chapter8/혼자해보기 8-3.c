#include <stdio.h>

int SumTwo(double a, double b) // x,y 값이 double형이므로 double로 선언한다.
{
	return a + b;
}
// main 함수 전에 함수를 정의한다.

int main(void)
{
	double x = 10.5, y = 20.5;
	double result;
	result = SumTwo(x, y);
	
	printf("result = %.2f\n", result);

	return 0;
}