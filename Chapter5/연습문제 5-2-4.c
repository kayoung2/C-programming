#include <stdio.h>

int main(void)
{
	int score;

	printf("당신의 점수를 입력하세요 : ");
	scanf("%d", &score);

	if(0<=score && score<=100)
	{
	switch(score/10)
	{
	case 10:
	case 9: printf("점수는 %d이고 성적은 %c입니다. \n", score, 'A'); break;
// switch문에 한 case 끝날때마다 break 꼭 적기 !!
	case 8: printf("점수는 %d이고 성적은 %c입니다. \n", score, 'B'); break;
	case 7: printf("점수는 %d이고 성적은 %c입니다. \n", score, 'C'); break;
	case 6: printf("점수는 %d이고 성적은 %c입니다. \n", score, 'D'); break;
	default: printf("점수는 %d이고 성적은 %c입니다. \n", score, 'F'); break;
	}
	}

	else
		printf("점수를 잘 못 입력하셨습니다.\n");

	return 0;
}