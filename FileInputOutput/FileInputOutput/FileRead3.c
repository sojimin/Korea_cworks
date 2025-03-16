#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	// 영어 단어 저장하기
	FILE* fp;
	char buffer[256];

	fopen_s(&fp, "words.txt", "r");
	if (fp == NULL)
	{
		printf("파일 열기에 실패함\n");
		return -1;
	}

	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("%s", buffer);
	}


	fclose(fp);

	return 0;
}