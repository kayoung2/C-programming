#include <stdio.h>

int main(void)
{
	int i=123;

	while(i>97) // �ҹ��� a �� 97�̰� z �� 122 �̴�.
	{
		i--; // 98�� 97�� �ǹǷ� i<97
		printf("%c ", i);
	}
	
	printf("\n");

	return 0;
}