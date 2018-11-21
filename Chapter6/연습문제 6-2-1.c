#include <stdio.h>

int main(void)
{
	int sum=0, number=1;
	printf("1에서 10까지의 합을 구합니다.\n");

	while(number<=10)
	{
		sum+=number;
		number++; // while에서 증감식은 명령문 다음에 적는다.
	}

	printf("합은 %d입니다. \n", sum);
	return 0;
}