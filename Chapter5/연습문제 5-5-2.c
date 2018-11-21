#include <stdio.h>

int main(void)
{
	int lee, ka, young, lky, ky;
	printf("정수 3개를 입력하시오 : ");
	scanf("%d %d %d", &lee, &ka, &young);
	
	lky=(lee>=ka)?lee:ka;
	ky=(lky>=young)?lky:young;
// lky와 ky를 묶이게 만들어 값이 자꾸 변하는 것을 막는다.
	
	printf("최댓값은 %d입니다.\n", ky);

return 0;
}