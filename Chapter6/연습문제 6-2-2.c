#include <stdio.h>

int main(void)
{
	int sum=0;
	int number=0;

	printf("1���� 10������ ���� ���մϴ�.\n");

	do{
		number++;
		sum+=number;
	}while(number<10); // while���� do���� �� ���� �� �����ϹǷ� 10������ �Ϸ��� number<10�� �ؾ� �Ѵ�.
// �׸��� do while���� ���ǽ��� �˻��ϴ� while�� ;�� �ݵ�� ���δ�.

	printf("���� %d�Դϴ�.\n", sum);
	return 0;
}