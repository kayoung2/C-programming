#include <stdio.h>

int main(void)
{
	int jumsu;
	printf("0������ 100�� ������ ������ �Է��ϼ���.\n");
	scanf("%d", &jumsu);

if(0<=jumsu && jumsu<=100) // c���� 0<=jumsu<=100 �̷��� �ȵǰ� ������ &&��� !!
{
	switch(jumsu/10){
// switch(���ǹ�) case ��� :
	case 0 :
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 :
		printf("���հ��Դϴ�.\n");
		break;
	case 6 :
	case 7 :
	case 8 :
	case 9 :
	case 10 :
		printf("�հ��Դϴ�.\n");
		break;
	}
}

else
	printf("0������ 100�� ������ ������ �ƴմϴ�.\n");

	return 0;
}