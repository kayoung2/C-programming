#include <stdio.h>
int main(void)
{
	char grade;
	printf("성적 등급을 입력하시오\n");
	grade=getchar();
// grade에 성적 등급값을 넣어줘야 하므로 grade=getchar()

	printf("당신의 성적 : ");
	putchar(grade);
// grade값을 출력해줘야 하므로 putchar(grade)
	printf("\n");

	return 0;
}