#include<stdio.h>

int main() {
	
	// ������ �迭
	char c1, c2, c3;
	c1 = 'B';
	c2 = c1 + 1;
	c3 = c1 - 1;
	// c4 = '��';   c������ �ѱ� ��� ���� �߻�
	char c4[] = "��";  // �ѱ� ǥ��� '�迭'�� ��

	printf("%c\n", c1);
	printf("%c\n", c2);
	printf("%c\n", c3);
	printf("%s\n", c4);
	
	// ���ĺ� �빮�ڸ� �����ϰ� ����ϼ���.
	char alphabets[26];
	char ch = 'A';

	for (int i = 0;i < 26;i++) {
		alphabets[i] = ch;
		printf("%c %d\n", alphabets[i], alphabets[i]);  // �ƽ�Ű�ڵ�
		ch++;
	}





	return 0;
}