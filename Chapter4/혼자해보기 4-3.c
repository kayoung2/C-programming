#include <stdio.h>

int main (void)
{
	unsigned char secondmask = 64;
	unsigned char fourthmask = 16;

	unsigned char input;

	printf("0 ~ 255 ������ ���� �Է��Ͻÿ�.\n");
// char�� 1byte�� 8bit, �� 11111111=255���� ǥ�� �����ϴ�.
	scanf("%c", &input); // input�� char������ �����Ͽ��� ������ scanf�� �� ���� "%c"�� ���־�� �Ѵ�.

	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n", input, input&secondmask);
// ��Ʈ ���� �˾Ƴ� ���� &�����ڸ� ����ϰ�, ��Ʈ ���� �ٲ� ���� ^�����ڸ� ����Ѵ�.

	printf("�Է��� �� %d�� �� ��° ��Ʈ�� %d�̴�.\n", input, input&fourthmask);

	return 0;
}