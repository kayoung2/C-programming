#include <stdio.h>

int main(void)
{
	int score;

	printf("����� ������ �Է��ϼ��� : ");
	scanf("%d", &score);

	if(0<=score && score<=100)
	{
	switch(score/10)
	{
	case 10:
	case 9: printf("������ %d�̰� ������ %c�Դϴ�. \n", score, 'A'); break;
// switch���� �� case ���������� break �� ���� !!
	case 8: printf("������ %d�̰� ������ %c�Դϴ�. \n", score, 'B'); break;
	case 7: printf("������ %d�̰� ������ %c�Դϴ�. \n", score, 'C'); break;
	case 6: printf("������ %d�̰� ������ %c�Դϴ�. \n", score, 'D'); break;
	default: printf("������ %d�̰� ������ %c�Դϴ�. \n", score, 'F'); break;
	}
	}

	else
		printf("������ �� �� �Է��ϼ̽��ϴ�.\n");

	return 0;
}