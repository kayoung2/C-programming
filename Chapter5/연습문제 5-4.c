#include <stdio.h>

int main(void)
{
	int lee;
	printf("양의 정수를 입력하세요 : ");
	scanf("%d", &lee);

	if(lee>=0 && (lee%2)==0)
	{
		if(lee%3==0)
			printf("입력한 수는 2의 배수이자 3의 배수입니다.\n");
		else if(lee%5==0)
			printf("입력한 수는 2의 배수이자 5의 배수입니다.\n");
		else
			printf("입력한 수는 2의 배수입니다.\n");
	}
// 만약에 if 다음에 if, else가 있다면 처음 if는 지나가고 다음 if와 else 두개가 묶인다.
	else if (lee>=0 && (lee%3)==0)
	{
		if(lee%5==0)
			printf("입력한 수는 3의 배수이자 5의 배수입니다.\n");
		else
			printf("입력한 수는 3의 배수입니다.\n");
	}
	else if (lee>=0 && (lee%5)==0)
		printf("입력한 수는 5의 배수입니다.\n");
	else if (lee>=0)
		printf("입력한 수는 2또는 3또는 5의 배수가 아닙니다.\n");
	else
		printf("양의 정수가 아닙니다.\n");

	return 0;
}