#include <stdio.h>

int main(void)
{
	int lee, ka, young, lky;

	printf("���� 3���� �Է��ϼ��� : ");
	scanf("%d %d %d", &lee, &ka, &young);

	lky=lee+ka+young>100;
// �� ������ ���� 100���� ũ�� 1, �ƴϸ� 0

	if (lky==1) // c���� ���ٴ� ��ȣ�� ==
		printf("����� %d, �հ�\n", lky);
	else
		printf("����� %d, ���հ�\n", lky);

	return 0;
}