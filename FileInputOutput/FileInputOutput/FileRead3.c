#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	// ���� �ܾ� �����ϱ�
	FILE* fp;
	char buffer[256];

	fopen_s(&fp, "words.txt", "r");
	if (fp == NULL)
	{
		printf("���� ���⿡ ������\n");
		return -1;
	}

	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("%s", buffer);
	}


	fclose(fp);

	return 0;
}