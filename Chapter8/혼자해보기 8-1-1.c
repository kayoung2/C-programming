#include <stdio.h>
int Division(int a, int b)
{
	int result;
	result = a / b;
	return result;
}
// �Լ��� � ������ ���� �̸� ����� ���� ��

int main()
{
	int x = 100, y = 20;
	int value;
	value = Division(x, y); // main �Լ����� �̸� ����� ���� �Լ��� �����
	printf("%d�� %d�� ���� ���� %d \n", x, y, value);

	return 0;
}