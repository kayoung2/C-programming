#include <stdio.h>

int main(void)
{
	int length, height;
	printf("�ﰢ���� �غ��� ���̸� �Է��Ͻÿ�.");
	scanf("%d %d", &length, &height);
// scanf�� ����� �� �Է����ִ� ���� �տ� &�� �� �ٿ��־�� �Ѵ� !!!

	int area=length*height/2;
	printf("�ﰢ���� ���̴� %d��.", area);

	return 0;
}