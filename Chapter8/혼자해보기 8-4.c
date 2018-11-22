#include <stdio.h>

int SelectSum(int Array[], int Size)
{
	int result = 0, i;
	for (i = 0; i < Size; i++)
	{
		if (Array[i] > 10) // 10보다 큰 값만 더해야 한다.
		{
			result += Array[i];
		}	
		else
		{ }
	}

	return result;
}

int main(void)
{
	int a[] = { 20,10,5,8,28 };
	int Sum;

	Sum = SelectSum(a, 5); // 배열은 0부터 시작, 따라서 a[4]가 다섯번째
	printf("배열에서 10보다 큰 값만 더한 Sum : %d\n", Sum);

	return 0;
}