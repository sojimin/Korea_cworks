#include<stdio.h>

int main() 
{

	int number = 11;
	char place = 'B';  // 문자 1개 - 홑따옴표
	char name[] = "소지민";  // 문자 여러개 - 문자열
	float weight = 60.3f;  // 실수 = 끝에 'f'를 붙임
	double height = 171.5;  // 실수

	printf("%d\n", number);
	printf("%c 강의장\n", place);
	printf("제 이름은 %s입니다.\n", name);
	printf("몸무게는 %.2f입니다.\n", weight);

	// 자료형의 크기 - sizeof(자료형)
	printf("%d, %dbyte\n", number, sizeof(number));						// int 4byte
	printf("%c 강의장, %dbyte\n", place, sizeof(place));					// char 영어 1byte
	printf("제 이름은 %s입니다. %dbyte\n", name, sizeof(name));			// char 한글 2byte
	printf("몸무게는 %.2f입니다. %dbyte\n", weight, sizeof(weight));		// float 4byte
	printf("키는 %.2fcm입니다. %dbyte", height, sizeof(height));			// double 8byte





	return 0;
}