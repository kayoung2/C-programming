// (����1)?(����2):(����3);�� ��쿡
(����1)�� ���� ��� (����2)�� �����ϰ�, ������ ��� (����3)�� �����Ѵ�.

#include <stdio.h>

int main(void)
{
	int value, x;
	printf("������ ������ �Է����ּ���.\n");
	scanf("%d", &x);
	
	if(x>0)
		value=1;
	else
		value=0;

	printf("������ %d�̰� �̶� value���� %d�Դϴ�.\n", x, value);
	printf("������ ���� �Է����ּ���.\n");

	int answer=20,y;
	scanf("%d", &y);

	if(y==20)
		printf("����\n");
	else
		printf("����\n");

	return 0;
}