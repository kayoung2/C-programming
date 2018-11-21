#include <stdio.h>

int main(void)
{
	int sum=0;
	int number=0;

	printf("1에서 10까지의 합을 구합니다.\n");

	do{
		number++;
		sum+=number;
	}while(number<10); // while문을 do문이 다 끝난 뒤 수행하므로 10까지를 하려면 number<10로 해야 한다.
// 그리고 do while에서 조건식을 검사하는 while은 ;을 반드시 붙인다.

	printf("합은 %d입니다.\n", sum);
	return 0;
}