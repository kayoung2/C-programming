#include <stdio.h>
int MultiTwo(int a, int b)
{
	return a*b;
}
int Big(int a, int b)
{
	if (a > b) return a;
	else return b;
}
int MultiTwo(int a, int b);
int Big(int a, int b);
// �Լ��� �����ϱ� ���ؼ��� ���� �Լ��� �����ؾ� �Ѵ�.
int main()
{
	int value1 = MultiTwo(1357, 9);
	int value2 = Big(123, 456);

	printf("1357�� 9�� MultiTwo �����ϸ� %d���� ���´�.\n", value1);
	printf("123�� 456�� Big �����ϸ� %d���� ���´�.\n", value2);

	return 0;
}