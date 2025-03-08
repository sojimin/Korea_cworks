// #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//년도를 입력하세요
	int year;
	char city[20];

	printf("년도 입력 : ");
	scanf_s("%d", &year);  // 배열에서는 '&' 사용x
	printf("%d년 입니다. 메모리주소: 0X%x\n", year, &year);

	// 도시를 입력하세요
	printf("도시 입력 : ");
	scanf_s("%s", city, sizeof(city));  // 배열에서는 & 사용x + sizeof
	printf("%s시\n", city);

	// 변수와 메모리 주소
	//int num1 = 90;
	//printf("%d, %x\n", num1, &num1);

	//int num2 = 80;
	//printf("%d, %x\n\n", num2, &num2);

	//int score[] = {80, 70, 90};

	//printf("%d, %x\n", score[0], &score[0]);    // 배열은 4byte씩 일정하게 차이남. 메모리 관리 수월.
	//printf("%d, %x\n", score[1], &score[1]);
	//printf("%d, %x\n", score[2], &score[2]);

	//printf("%d, %x\n", score[0], score);  // 배열의 시작주소는 배열의 이름이다.




	return 0;
}