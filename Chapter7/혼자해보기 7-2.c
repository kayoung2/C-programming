#include <stdio.h>

int main(void)
{
	int mult[] = { 4,2,5,1,3 };
	int i, sum = 1; // ���������� sum=0, ������������ sum=1

	for (i = 0; i < 5; i++) // mult[0]~mult[4]�̹Ƿ� i<5
		sum *= mult[i];

	printf("�迭 mult ������ ���� %d��.\n", sum);
	
	return 0;
}