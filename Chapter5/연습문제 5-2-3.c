#include <stdio.h>

int main(void)
{
	int jumsu;
	printf("0점에서 100점 사이의 점수를 입력하세요.\n");
	scanf("%d", &jumsu);

if(0<=jumsu && jumsu<=100) // c언어에서 0<=jumsu<=100 이런거 안되고 무조건 &&사용 !!
{
	switch(jumsu/10){
// switch(조건문) case 상수 :
	case 0 :
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 :
		printf("불합격입니다.\n");
		break;
	case 6 :
	case 7 :
	case 8 :
	case 9 :
	case 10 :
		printf("합격입니다.\n");
		break;
	}
}

else
	printf("0점에서 100점 사이의 점수가 아닙니다.\n");

	return 0;
}