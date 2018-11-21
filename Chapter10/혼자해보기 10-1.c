#include <stdio.h>

int main(void)
{
	int a = 10;
	int*p = &a; // 포인터 p는 a의 주소를 나타낸다.

	printf("%p\n", p); // a의 주소
	printf("%p\n", &p); // p의 주소
	printf("%d\n", *p); //p가 가리키는 주소의 값

	return 0;

}