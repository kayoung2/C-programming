#include <stdio.h>

int SumTwo(double a, double b) // x,y ���� double���̹Ƿ� double�� �����Ѵ�.
{
	return a + b;
}
// main �Լ� ���� �Լ��� �����Ѵ�.

int main(void)
{
	double x = 10.5, y = 20.5;
	double result;
	result = SumTwo(x, y);
	
	printf("result = %.2f\n", result);

	return 0;
}