#include <stdio.h>

int main(void)
{
	char str[] = "code";
	char stri[5];

	for (int i = 0; i < 4; i++)
	{
		scanf("%c", &stri[i]);
// ��й�ȣ�� �Է¹޴� �ý����̴�. stri[4]=/0 �̹Ƿ� ����д�.
	}

	int index = 0;
	for (int j = 0; str[j]; j++)
	{
		if (stri[j] == str[j]) continue;
// ��й�ȣ�� ���ٸ� index�� ������Ű�� �ʴ´�.
			index++;
	}

	if (index == 0)
		printf("���α׷��� �����մϴ�.\n");

	else
		printf("��й�ȣ�� Ʋ���ϴ�.\n");

	return 0;
}