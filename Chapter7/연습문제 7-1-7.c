#include <stdio.h>

int main(void)
{
	int aryTmp[] = { 10,20,30,40 };
	int i, aryLength;

	aryLength = sizeof(aryTmp) / sizeof(int);
// sizeof(aryTmp)�� �迭�� ��ü ����Ʈ���� sizeof(int)�� �迭 �ڷ����� ����Ʈ���̴�.
���� sizeof(aryTmp)/sizeof(int)�� �ϸ� �迭�� ���� ������ ��Ÿ����.

	printf("�迭���� �̿��ؼ� �ּҸ� ����մϴ�.\n");

	for (i = 0; i < aryLength; i++)
		printf("aryTmp�� %d��° �ּҴ� %p�̴�.\n", i + 1, &aryTmp[i]);

// �迭�� 0���� �����ϹǷ� i+1�� ����ؾ� �Ѵ�.
�� �迭�� �ּҸ� ��Ÿ���� ���ؼ��� aryTmp+i�Ǵ� &aryTmp[i]�� ����ؾ� �Ѵ�.

	return 0;
}