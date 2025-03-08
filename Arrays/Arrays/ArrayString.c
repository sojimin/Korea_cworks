#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char fr1[] = "apple";
	char fr2[] = { 'a', 'p','p','l','e','\0' };
	char fr3[] = "사과";

	printf("%s\n", fr1);
	printf("%d\n", sizeof(fr1));  // 5 + 1(\0 널문자)
	printf("%s\n", fr2);
	printf("%d\n", sizeof(fr2));  
	printf("%s\n", fr3);
	printf("%d\n", sizeof(fr3)); // 한글 2byte

	//// 이름을 입력받아 출력하는 프로그램
	//char name[20];
	//printf("당신의 이름은 무엇입니까? ");
	//scanf("%s", name); // 배열에서는 주소연산자(&) 사용x
	//printf("당신의 이름은 %s이군요.\n", name);

	//int age;
	//printf("당신의 나이는 몇세입니까? ");
	//scanf("%d", &age);
	//printf("당신의 나이는 %d세이군요.\n", age);

	//	배열의 이름은 배열의 시작 주소이다
	int arr[] = { 10,20,30 };
	//%x - 메모리주소(16진수)
	printf("%x  %x  %x\n", &arr[0], &arr[1], &arr[2]);
	printf("%x  %x  %x\n", arr, arr + 1, arr + 2);


	return 0;
}