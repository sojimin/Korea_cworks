#include<stdio.h>

int main() 
{

	int number = 11;
	char place = 'B';  // ���� 1�� - Ȭ����ǥ
	char name[] = "������";  // ���� ������ - ���ڿ�
	float weight = 60.3f;  // �Ǽ� = ���� 'f'�� ����
	double height = 171.5;  // �Ǽ�

	printf("%d\n", number);
	printf("%c ������\n", place);
	printf("�� �̸��� %s�Դϴ�.\n", name);
	printf("�����Դ� %.2f�Դϴ�.\n", weight);

	// �ڷ����� ũ�� - sizeof(�ڷ���)
	printf("%d, %dbyte\n", number, sizeof(number));						// int 4byte
	printf("%c ������, %dbyte\n", place, sizeof(place));					// char ���� 1byte
	printf("�� �̸��� %s�Դϴ�. %dbyte\n", name, sizeof(name));			// char �ѱ� 2byte
	printf("�����Դ� %.2f�Դϴ�. %dbyte\n", weight, sizeof(weight));		// float 4byte
	printf("Ű�� %.2fcm�Դϴ�. %dbyte", height, sizeof(height));			// double 8byte





	return 0;
}