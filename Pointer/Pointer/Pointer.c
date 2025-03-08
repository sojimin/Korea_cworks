#include<stdio.h>

int main() 
{
	// ������ ����
	int n = 3;

	// ������ ������ ���� - ������ �޸� ����(�ּ�)�� ����
	int* pn;

	pn = &n;

	printf("������ ��: %d\n", n);
	printf("������ �޸� ����: %x\n", &n);
	
	printf("������ (����)�� ��: %x\n", pn);
	printf("������ (����)�� �޸� ����: %x\n", &pn);
	printf("������ (����)�� ����Ű�� ������ ��: %d\n", *pn);

	// �ڷ����� ũ��
	// �Ϲݺ��� - ������(4B), ������(1B), �Ǽ���(8B)
	// ������ - ��� 8Byte��
	printf("������ �ڷ��� ũ��: %d Byte\n", sizeof(n));  // 4byte
	printf("������ ������ �ڷ��� ũ��: %d Byte\n", sizeof(pn));  //8byte
	printf("=================================\n");

	//������ ����
	char c;
	char* pc;

	c = 'A';
	pc = &c;

	printf("������ ��: %c\n", c);
	printf("������ �ּ�: %x\n", &c);
	printf("�������� ��: %x\n", pc);
	printf("�����Ͱ� ����Ű�� �޸� ��: %c\n", *pc);
	printf("������ �ڷ��� ũ��: %d Byte\n", sizeof(c));  // 1byte
	printf("������ ������ �ڷ��� ũ��: %d Byte\n", sizeof(pc));  //8byte



	return 0;
}