#include<stdio.h>

int x = 1; // 전역 변수 (Global Variable)
// 전역변수의 생명 주기
// 프로그램이 시작될 때 생성, 프로그램이 종료될 때 소멸(해제)


int add10();
int main() {

	printf("x = %d\n", x);

	int value = add10();  // value : 지역 변수(Local Variable)
	
	printf("value = %d\n", value);
	printf("x = %d\n", x);

	return 0;
}

int add10() 
{
	x += 10;

	return x;
}