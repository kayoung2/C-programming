#include <stdio.h>

int main(void)
{
	char subject[] = "English";
	int i = 0;

	printf("�ݺ����� �̿��ؼ� ���ڿ��� ����մϴ�.\n");

	while (subject[i]) // subject[i]�� /0�� �Ǹ� �ߴ�
		putchar(subject[i++]); // while���� �ٷ� �� ���常 ����
// putchar(subject[++i])�� �ع����� nglish ���, subject[1]~
	printf("\n");

	return 0;
}