#include<stdio.h>

int main() {

	// getchar() - 문자 1개 입력
	char c1, c2;

	//printf("입력하세요\n");

	//c1 = getchar();  // 입력받음 (버퍼(임시기억장소)에는 \n이 남아있음)
	//while (getchar() != '\n'); // 버퍼 비우는 구문
	//c2 = getchar();


	//printf("%c", c1);

	char name[20];
	int age;

	printf("이름 입력: ");
	//scanf_s("%s", name, sizeof(name));
	//fgets(name, sizof(name), stdin);

	printf("나이 입력: ");
	scanf_s("%d", &age);

	printf("이름 :%s  나이: %d", name, age);



	return 0;
}