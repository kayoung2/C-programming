#include <stdio.h>

int main(void)
{
	int i,j,count=0;

	for(i=2;count<=2000;++i)
	{
		for(j=2;j<i;++j)
		{
			if(i%j==0)
				break;
		}

		if(j==i){
			count+=i;
		}

	}
		
			printf("�Ҽ��� 2���� ��� ���� �� 2000���� ���� �ִ����� %d�̴�.\n", count-i);
// count<=2000 �̸� ������ �� �� �� �����ϹǷ�, count-i�� ����ؾ� �Ѵ�.
			printf("���������� �������� �Ҽ��� %d�̴�.\n", i-1);
// ���������� i�� �� �� ������ �����̹Ƿ�, i-1�� ����ؾ� �Ѵ�.

		return 0;
}