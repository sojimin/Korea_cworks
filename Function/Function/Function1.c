#include<stdio.h>

int main() 
{
	int year = 2025;
	char place = 'B';
	char name[] = "jimin";
	
	printf("%d�� �Դϴ�.\n", year);
	printf("%c�������Դϴ�.\n", place);
	printf("�� �̸��� %s�Դϴ�.\n", name);

	printf("�迭�� ũ��: %d\n", sizeof(name));  // ���� 1byte �ѱ� 2byte, +�ι���(\0) 1byte


	return 0;
}