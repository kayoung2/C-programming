#include <stdio.h>

int main(void)
{
	int i,j;

	for(i=2;i<21;i+=2) // 10���� ���ڸ� ����ϱ� ����
	{
		for(j=1;j<i;j+=2) // Ȧ���� ����ϱ� ����
		{
			printf("%d" " ", j);
// ���⿡ \n�� �ٿ������� �� ���ڰ� ��µ� ������ �� ���� ������� �ȴ�.
		}

		printf("\n");
	}

	return 0;
}