#include <stdio.h>

int SelectSum(int Array[], int Size)
{
	int result = 0, i;
	for (i = 0; i < Size; i++)
	{
		if (Array[i] > 10) // 10���� ū ���� ���ؾ� �Ѵ�.
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

	Sum = SelectSum(a, 5); // �迭�� 0���� ����, ���� a[4]�� �ټ���°
	printf("�迭���� 10���� ū ���� ���� Sum : %d\n", Sum);

	return 0;
}