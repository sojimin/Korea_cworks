#include<stdio.h>

// ���� ���� ���� �ֱ�(Scope)
// ���(�Լ�,���)�ȿ��� �ʱ�ȭ �� �� ����, ����� ����� �Ҹ�(����)


int sum10();
int main() {

	int value = sum();

	printf("value = %d\n", value);
	// printf("x = %d\n,x"); // x�� '��������' -> ���� �ְ� ������� ������ ������


	return 0;
}


int sum()
{
	
	int x = 1;
	x += 10;

	return x;
}