#include <stdio.h>

int main(void)
{
	int input;
	printf("양수를 입력하세요.\n");
	scanf("%d", &input);

	if((input%2==0)&&(input>0))
	{
		printf("입력한 수는 \n");
	printf("짝수입니다. 11\n");
	}
	else if((input%2!=0)&&(input>0))
// else if를 하면 조건문을 적어야함.
		printf("입력한 수 %d는 홀수입니다.\n", input);
	else
		printf("입력한 수는 양수가 아닙니다. 양수를 입력해주세요.\n");
	return 0;
}