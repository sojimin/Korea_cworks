#include<stdio.h>

int main() {

	// ������ �迭 - ũ��(4)
	int a[4] = { 10, 20, 30, 40 };

	// ������ ������ �迭
	int* pa;
	pa = a;

	/*printf("a[0]�� ���� %d\n", a[0]);
	printf("a[0]�� �޸� �ּҴ� %x\n", &a[0]);
	printf("�迭�� �̸� a�� �� %x\n\n", a);
	
	printf("a[1]�� ���� %d\n", a[1]);
	printf("a[1]�� �޸� �ּҴ� %x\n", &a[1]);
	printf("�迭�� �̸� a+1�� �� %x\n", a+1);
	return 0;*/

	for (int i = 0; i < 4; i++) 
	{
		printf("%d %x %x\n", pa[i], &pa[i], pa + i);
	}

	// ������ - �����Ͱ� ����Ű�� ��
	printf("������ pa�� ����Ű�� �޸𸮰�: %d\n", *(pa+0));
	printf("������ pa+1�� ����Ű�� �޸𸮰�: %d\n", *(pa+1));  //��ȣ �ȹ����� 11��(x)

	for (int i = 0; i < 4; i++)
	{
		printf("%x %d\n", pa+i, *(pa+i));
	}
	printf("=========================================\n");
	//���ڿ�(�迭)�� ������
	char msg[] = "Good Luck";
	char* p = msg; // msg�� �ּҸ� ����

	printf("%c\n", msg[0]);
	printf("%s\n", msg);

	// �ڷ����� ũ��
	printf("���ڿ��� ũ��: %dByte\n", sizeof(msg));
	printf("���ڿ� �������� ũ��: %dByte\n", sizeof(p));

	// �޸� �ּ�
	printf("���ڿ� �迭�� �ּ�: %x\n", msg);
	printf("���ڿ� �������� ��: %x\n", p);

	// �ּҸ� �̿��� ���ڿ� ���
	printf("%s\n", p);
	printf("%s\n", p+1);

	printf("======================\n");
	// ������ ������(*) �� ���
	printf("%c\n", *p);
	printf("%c\n", *(p+1));
	printf("%c\n", *(p+2));
	printf("%c\n", *(p+3));

	printf("======================\n");
	// ���ڿ��� ũ��
	int size = sizeof(msg) / sizeof(msg[0]);  // 10 / 1
	printf("%d\n", size);

	for (int i = 0;i < size; i++) {
		printf("%c\n", *(p + i));
	}
}