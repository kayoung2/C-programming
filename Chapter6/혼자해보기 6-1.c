#include <stdio.h>

int main(void)
{
	int number, i;

	printf("�ݺ� Ƚ���� �Է��ϼ��� : ");
	scanf("%d", &number);

	printf("for�� �����Դϴ�!!\n");

	for(i=1;i<=number;i++) // i�� 1�����̹Ƿ� number�� �� ������ �ݺ��� �ȴ�.
	{
		printf("%d�� �ݺ��Դϴ�!!\n", i);
// for���̹Ƿ� number�� 5�̸� 5�� �ݺ��Դϴ�!! �� ���� �ѹ��� �ߴ� �� �ƴ϶�, 1�� 2�� ...5������ 5������ ���.
	}

	return 0;
}