#include <stdio.h>

int main(void)
{
	int sum=0, number=1;
	printf("1���� 10������ ���� ���մϴ�.\n");

	while(number<=10)
	{
		sum+=number;
		number++; // while���� �������� ��ɹ� ������ ���´�.
	}

	printf("���� %d�Դϴ�. \n", sum);
	return 0;
}