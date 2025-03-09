#include<stdio.h>

void CallByValue(int);
void CallByReference(int* p);
int main()
{
	int num = 10;

	CallByValue(num);
	printf("main �Լ� �� �� ���� �� : %d\n", num);

	printf("============================\n");

	CallByReference(&num);
	printf("main �Լ� �� �� ���� �� : %d\n", num);

	return 0;
}

void CallByValue(int n)
{
	n++;
	printf("���� �Լ� �� �� ���� �� : %d\n", n);
}


void CallByReference(int *p)  
//�� ��° �Լ��� CallByReference�� �����͸� ����Ͽ� ���� �Լ����� ���� ���޵� ������ �ּҿ� �����ϹǷ�,
// �Լ� ������ ���� �����ϸ� ���� �Լ������� �� ����� ���� Ȯ���� �� �ִ�.
{
	*p += 1;  /// p�� ����Ű�� �ּ��� ���� 1 ������Ŵ
	printf("���� �Լ� �� �� ���� �� : %d\n", *p);
}
