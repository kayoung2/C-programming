#include <stdio.h>

int main(void)
{
	int lee;
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &lee);

	if(lee>=0 && (lee%2)==0)
	{
		if(lee%3==0)
			printf("�Է��� ���� 2�� ������� 3�� ����Դϴ�.\n");
		else if(lee%5==0)
			printf("�Է��� ���� 2�� ������� 5�� ����Դϴ�.\n");
		else
			printf("�Է��� ���� 2�� ����Դϴ�.\n");
	}
// ���࿡ if ������ if, else�� �ִٸ� ó�� if�� �������� ���� if�� else �ΰ��� ���δ�.
	else if (lee>=0 && (lee%3)==0)
	{
		if(lee%5==0)
			printf("�Է��� ���� 3�� ������� 5�� ����Դϴ�.\n");
		else
			printf("�Է��� ���� 3�� ����Դϴ�.\n");
	}
	else if (lee>=0 && (lee%5)==0)
		printf("�Է��� ���� 5�� ����Դϴ�.\n");
	else if (lee>=0)
		printf("�Է��� ���� 2�Ǵ� 3�Ǵ� 5�� ����� �ƴմϴ�.\n");
	else
		printf("���� ������ �ƴմϴ�.\n");

	return 0;
}