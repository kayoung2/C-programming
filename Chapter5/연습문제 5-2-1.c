#include <stdio.h>

int main(void)
{
	int input;
	printf("����� �Է��ϼ���.\n");
	scanf("%d", &input);

	if((input%2==0)&&(input>0))
	{
		printf("�Է��� ���� \n");
	printf("¦���Դϴ�. 11\n");
	}
	else if((input%2!=0)&&(input>0))
// else if�� �ϸ� ���ǹ��� �������.
		printf("�Է��� �� %d�� Ȧ���Դϴ�.\n", input);
	else
		printf("�Է��� ���� ����� �ƴմϴ�. ����� �Է����ּ���.\n");
	return 0;
}