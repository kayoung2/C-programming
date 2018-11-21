#include <stdio.h>

int main(void)
{
	int i, sum=0;

	for(i=1;i<=100;i++)
	{
	if( (i%2)!=0 ||(i%6)!=0 ) continue; // 드모르간의 법칙 이용, !( && ) = (! || ! )
	printf("%d ", i);
	}
	
	printf("\n");
	
	return 0;

}