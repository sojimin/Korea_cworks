#include<stdio.h>

int main() {

	// getchar() - ���� 1�� �Է�
	char c1, c2;

	//printf("�Է��ϼ���\n");

	//c1 = getchar();  // �Է¹��� (����(�ӽñ�����)���� \n�� ��������)
	//while (getchar() != '\n'); // ���� ���� ����
	//c2 = getchar();


	//printf("%c", c1);

	char name[20];
	int age;

	printf("�̸� �Է�: ");
	//scanf_s("%s", name, sizeof(name));
	//fgets(name, sizof(name), stdin);

	printf("���� �Է�: ");
	scanf_s("%d", &age);

	printf("�̸� :%s  ����: %d", name, age);



	return 0;
}