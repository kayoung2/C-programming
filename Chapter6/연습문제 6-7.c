#include <stdio.h>

int main(void)
{
	int i,j,count=0;

	for(i=2;count<=2000;++i)
	{
		for(j=2;j<i;++j)
		{
			if(i%j==0)
				break;
		}

		if(j==i){
			count+=i;
		}

	}
		
			printf("소수를 2부터 계속 더할 때 2000보다 작은 최대합은 %d이다.\n", count-i);
// count<=2000 이면 덧셈을 한 번 더 실행하므로, count-i를 출력해야 한다.
			printf("마지막으로 더해지는 소수는 %d이다.\n", i-1);
// 마찬가지로 i가 한 번 더해진 상태이므로, i-1을 출력해야 한다.

		return 0;
}