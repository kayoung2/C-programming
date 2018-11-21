// (문장1)?(문장2):(문장3);의 경우에
(문장1)이 참일 경우 (문장2)를 수행하고, 거짓일 경우 (문장3)을 수행한다.

#include <stdio.h>

int main(void)
{
	int value, x;
	printf("임의의 정수를 입력해주세요.\n");
	scanf("%d", &x);
	
	if(x>0)
		value=1;
	else
		value=0;

	printf("정수는 %d이고 이때 value값은 %d입니다.\n", x, value);
	printf("문제의 답을 입력해주세요.\n");

	int answer=20,y;
	scanf("%d", &y);

	if(y==20)
		printf("정답\n");
	else
		printf("오답\n");

	return 0;
}