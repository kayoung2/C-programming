#include <stdio.h>

int main(void)
{
	unsigned int lee;
	unsigned char ka=128;
	unsigned char young=16;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &lee);
// %c�� �� ��� ���ڸ� �ƽ�Ű �ڵ�� �޾Ƶ��̱� ������ %d�� �ؾ��Ѵ�.

	printf("�Է��� ������ ù ��° ��Ʈ ���� %d�Դϴ�.\n", (lee&ka)==ka);
// Ȯ���� �ϱ� ���ؼ� ��ȣ�� �ľ� �Ѵ�!!
	printf("�Է��� ������ �� ��° ��Ʈ ���� %d�Դϴ�.\n", (lee&young)==young);

	return 0;
}