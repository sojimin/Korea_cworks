#include<stdio.h>

int x = 1; // ���� ���� (Global Variable)
// ���������� ���� �ֱ�
// ���α׷��� ���۵� �� ����, ���α׷��� ����� �� �Ҹ�(����)


int add10();
int main() {

	printf("x = %d\n", x);

	int value = add10();  // value : ���� ����(Local Variable)
	
	printf("value = %d\n", value);
	printf("x = %d\n", x);

	return 0;
}

int add10() 
{
	x += 10;

	return x;
}