#include <stdio.h>

int main(void)
{
	int mult[] = { 4,2,5,1,3 };
	int i, sum = 1; // µ¡¼À»¬¼ÀÀº sum=0, °ö¼À³ª´°¼ÀÀº sum=1

	for (i = 0; i < 5; i++) // mult[0]~mult[4]ÀÌ¹Ç·Î i<5
		sum *= mult[i];

	printf("¹è¿­ mult ¿ø¼ÒÀÇ °öÀº %d´Ù.\n", sum);
	
	return 0;
}