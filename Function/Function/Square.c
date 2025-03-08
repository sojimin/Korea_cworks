#include<stdio.h>

//반환자료형 - int, 매개변수 - int
//int square(int x);
// 함수 정의부가 main()위에 있으면 시그니처(프로토타입)는 생략 가능
int square(int x)
{
	return x * x;  // 제곱 기능
}

int main() {

	int value = square(4);
	printf("결과값 : %d\n", value);

	return 0;  // main함수는 운영체제가 호출
}

