#include<stdio.h>

int main() 
{
	int year = 2025;
	char place = 'B';
	char name[] = "jimin";
	
	printf("%d년 입니다.\n", year);
	printf("%c강의장입니다.\n", place);
	printf("제 이름은 %s입니다.\n", name);

	printf("배열의 크기: %d\n", sizeof(name));  // 영어 1byte 한글 2byte, +널문자(\0) 1byte


	return 0;
}