#include <stdio.h>

int main(void)
{
	char name[] = "Peter";

	printf("�ݺ����� �̿��ؼ� ���ڿ��� ����մϴ�.\n");
	for (int i = 0; i < 6; i++)
// i ����, name[0]~name[5], name[5]=/0
		printf("%c", name[i]);
	printf("\n"); // for�� �ٷ� �� ���常 ����

	return 0;
}