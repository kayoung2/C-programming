#include <stdio.h>

int main(void)
{
	int i, sum=0;

	for(i=1;i<=10;i++)
	{
		if(i%2!=0) continue; // i�� ¦���� �ƴϸ� �ٽ� i++ �����ϵ��� �ϴ� ����
		sum+=i;
	}

	printf("1���� 10���� ¦���� ���� %d�̴�.\n", sum);
	return 0;
}