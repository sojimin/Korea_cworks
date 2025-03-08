#include<stdio.h>

// 함수 선언부
void sayHello(); 
void sayHello2(char[]);  //매개변수로 자료형만 표기

int main() {

	sayHello();  //함수 호출

	sayHello2("지민");
	sayHello2("jimin");

	return 0;
}

// 함수 정의(몸체)
void sayHello()
{
	printf("안녕하세요\n");
}

void sayHello2(char name[])
{
	printf("%s님 안녕하세요\n",name);

}