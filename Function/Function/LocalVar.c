#include<stdio.h>

// 지역 변수 생명 주기(Scope)
// 블록(함수,제어문)안에서 초기화 될 때 생성, 블록을 벗어나면 소멸(해제)


int sum10();
int main() {

	int value = sum();

	printf("value = %d\n", value);
	// printf("x = %d\n,x"); // x는 '지역변수' -> 값을 주고 사라지기 때문에 오류남


	return 0;
}


int sum()
{
	
	int x = 1;
	x += 10;

	return x;
}