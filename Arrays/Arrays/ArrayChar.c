#include<stdio.h>

int main() {
	
	// 문자형 배열
	char c1, c2, c3;
	c1 = 'B';
	c2 = c1 + 1;
	c3 = c1 - 1;
	// c4 = '가';   c언어에서는 한글 출력 오류 발생
	char c4[] = "가";  // 한글 표기는 '배열'로 함

	printf("%c\n", c1);
	printf("%c\n", c2);
	printf("%c\n", c3);
	printf("%s\n", c4);
	
	// 알파벳 대문자를 저장하고 출력하세요.
	char alphabets[26];
	char ch = 'A';

	for (int i = 0;i < 26;i++) {
		alphabets[i] = ch;
		printf("%c %d\n", alphabets[i], alphabets[i]);  // 아스키코드
		ch++;
	}





	return 0;
}