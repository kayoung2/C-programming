#include <stdio.h>

int main(void)
{
	int lee, ka, young, lky, ky;
	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &lee, &ka, &young);
	
	lky=(lee>=ka)?lee:ka;
	ky=(lky>=young)?lky:young;
// lky�� ky�� ���̰� ����� ���� �ڲ� ���ϴ� ���� ���´�.
	
	printf("�ִ��� %d�Դϴ�.\n", ky);

return 0;
}