#include <stdio.h>

int main (void)
{
	int number;

	printf("������ ���� �Է����ּ���.\n");
	scanf("%d", &number);

	printf("�Է��� ���� %d�Դϴ�.\n", number);

	if (0<=number)
	{
		if (number%5==0) // %�����ڴ� �������� ������ִ� �������̴�.
			printf("�Է��� �� %d�� 5�� ����Դϴ�.\n", number);
		else
			printf("�Է��� �� %d�� 5�� ����� �ƴմϴ�.\n", number);
	}

	else
		printf("�Է��� �� %d�� �����Դϴ�.\n", number);
// �� ������ ���� �� �� ; �Է��ϱ� !!!

	return 0;
}