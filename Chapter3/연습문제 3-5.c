#include <stdio.h>

int main(void)
{
	int lee;
	printf("당신의 등수를 입력하세요.\n");
	scanf("%d", &lee);
// scanf가 안 될 때 속성에 c/c++에 일반에 sdl검사 아니요로 바꾸면 된다.

	float ka = ((1000-lee)*100)/1000;
//백분율은 자기 밑에 얼마나 있는지 알려주는 것, *100과 /1000위치를 바꿨을 때 왜 안 되는 지는 모르겠음.
	printf("당신의 성적 백분율은 %f%%입니다.\n", ka);

	return 0;
}