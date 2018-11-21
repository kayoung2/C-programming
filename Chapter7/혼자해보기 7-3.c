#include <stdio.h>

int main(void)
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i, sum = 0;

	for (i = 0; i < 3; i++)
	{
		sum += a[i][0]; // a[0][0]~a[2][0]이 a의 1열이다.
	}
	printf("1열의 원소를 다 더하면 %d다. \n", sum);
	sum = 0;

	for (i = 0; i < 3; i++)
	{
		sum += a[i][1];
	}
	printf("2열의 원소를 다 더하면 %d다. \n", sum);
	sum = 0;

	for (i = 0; i < 3; i++)
	{
		sum += a[i][2];
	}
	printf("3열의 원소를 다 더하면 %d다. \n", sum);
	
	return 0;
}
// 더 간단하게 i,j 둘 다 이용해서 할 수도 있을 것 같다.