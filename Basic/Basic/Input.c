// #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//�⵵�� �Է��ϼ���
	int year;
	char city[20];

	printf("�⵵ �Է� : ");
	scanf_s("%d", &year);  // �迭������ '&' ���x
	printf("%d�� �Դϴ�. �޸��ּ�: 0X%x\n", year, &year);

	// ���ø� �Է��ϼ���
	printf("���� �Է� : ");
	scanf_s("%s", city, sizeof(city));  // �迭������ & ���x + sizeof
	printf("%s��\n", city);

	// ������ �޸� �ּ�
	//int num1 = 90;
	//printf("%d, %x\n", num1, &num1);

	//int num2 = 80;
	//printf("%d, %x\n\n", num2, &num2);

	//int score[] = {80, 70, 90};

	//printf("%d, %x\n", score[0], &score[0]);    // �迭�� 4byte�� �����ϰ� ���̳�. �޸� ���� ����.
	//printf("%d, %x\n", score[1], &score[1]);
	//printf("%d, %x\n", score[2], &score[2]);

	//printf("%d, %x\n", score[0], score);  // �迭�� �����ּҴ� �迭�� �̸��̴�.




	return 0;
}