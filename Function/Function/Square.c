#include<stdio.h>

//��ȯ�ڷ��� - int, �Ű����� - int
//int square(int x);
// �Լ� ���Ǻΰ� main()���� ������ �ñ״�ó(������Ÿ��)�� ���� ����
int square(int x)
{
	return x * x;  // ���� ���
}

int main() {

	int value = square(4);
	printf("����� : %d\n", value);

	return 0;  // main�Լ��� �ü���� ȣ��
}

