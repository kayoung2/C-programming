#include <stdio.h>
#define ROOT 0.86605
#define PIE 3.141592

int main(void)
{
	int lee, ka;
	printf("���ﰢ��, ���簢���� �� �� �Ǵ� ���� �������� �Է��Ͻÿ� : ");
	scanf("%d", &lee);

	printf("���ﰢ���� ���̸� ���ϰ� ������ 1, ���簢���� ���̸� ���ϰ� ������ 2, ���� ���̸� ���ϰ� ������ 3�� �Է��Ͻÿ� : ");
	scanf("%d", &ka);

	if(ka==1)
		printf("���ﰢ���� ���̴� %f�Դϴ�.\n", lee*lee*ROOT);
// �Ǽ��� ���ϰ� �ǹǷ� �Ǽ��� ���;� �Ѵ�. %d�� �ƴ϶� %f�� �� ��.
	else if(ka==2)
		printf("���簢���� ���̴� %f�Դϴ�.\n", lee*lee);
	else if(ka==3)
		printf("���� ���̴� %f�Դϴ�.\n", lee*lee*PIE);
	else
		printf("1,2,3 �� �ϳ��� �Է��Ͻÿ�.\n");

	return 0;
}