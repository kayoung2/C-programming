#include <stdio.h>

int main(void)
{
	int i,j;

	for(i=2;i<21;i+=2) // 10개의 숫자를 출력하기 위함
	{
		for(j=1;j<i;j+=2) // 홀수만 출력하기 위함
		{
			printf("%d" " ", j);
// 여기에 \n을 붙여버리면 한 숫자가 출력될 때마다 한 줄이 띄워지게 된다.
		}

		printf("\n");
	}

	return 0;
}