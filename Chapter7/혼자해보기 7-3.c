#include <stdio.h>

int main(void)
{
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i, sum = 0;

	for (i = 0; i < 3; i++)
	{
		sum += a[i][0]; // a[0][0]~a[2][0]�� a�� 1���̴�.
	}
	printf("1���� ���Ҹ� �� ���ϸ� %d��. \n", sum);
	sum = 0;

	for (i = 0; i < 3; i++)
	{
		sum += a[i][1];
	}
	printf("2���� ���Ҹ� �� ���ϸ� %d��. \n", sum);
	sum = 0;

	for (i = 0; i < 3; i++)
	{
		sum += a[i][2];
	}
	printf("3���� ���Ҹ� �� ���ϸ� %d��. \n", sum);
	
	return 0;
}
// �� �����ϰ� i,j �� �� �̿��ؼ� �� ���� ���� �� ����.