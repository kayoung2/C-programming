#include <stdio.h>
#define PIE 3.141592 // define ������ ���� �ϸ� ���� ������ ����ȴ�.

double main(void)
{
	double lee;
	printf("�������� �������ּ���.\n");
	scanf("%lf", &lee); // double�� ������ %lf, float���� %f

	double ka = lee*lee*PIE;
	printf("�������� %lf�� ���� ���̴� %lf�̴�.\n", lee, ka);

	return 0;
}