#include<stdio.h>

void CallByValue(int);
void CallByReference(int* p);
int main()
{
	int num = 10;

	CallByValue(num);
	printf("main 함수 내 값 변경 후 : %d\n", num);

	printf("============================\n");

	CallByReference(&num);
	printf("main 함수 내 값 변경 후 : %d\n", num);

	return 0;
}

void CallByValue(int n)
{
	n++;
	printf("지역 함수 내 값 변경 후 : %d\n", n);
}


void CallByReference(int *p)  
//두 번째 함수인 CallByReference는 포인터를 사용하여 메인 함수에서 직접 전달된 변수의 주소에 접근하므로,
// 함수 내에서 값을 변경하면 메인 함수에서도 그 변경된 값을 확인할 수 있다.
{
	*p += 1;  /// p가 가리키는 주소의 값을 1 증가시킴
	printf("지역 함수 내 값 변경 후 : %d\n", *p);
}
