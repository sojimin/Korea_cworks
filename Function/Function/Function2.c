#include<stdio.h>


int  add(int x, int y);// 함수 선언부
int  sub(int x, int y);
int main() {

	int result1, result2;
	int a = 10, b = 20;
	
	result1 = add(a, b);
	printf("result1 = %d\n", result1);
	
	result2 = sub(a, b);
	printf("result2 = %d\n", result2);


	return 0;
}


int  add(int x, int y) 
{
	return x + y;
}

int  sub(int x, int y)
{
	return x - y;
}