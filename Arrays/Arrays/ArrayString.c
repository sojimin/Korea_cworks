#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char fr1[] = "apple";
	char fr2[] = { 'a', 'p','p','l','e','\0' };
	char fr3[] = "���";

	printf("%s\n", fr1);
	printf("%d\n", sizeof(fr1));  // 5 + 1(\0 �ι���)
	printf("%s\n", fr2);
	printf("%d\n", sizeof(fr2));  
	printf("%s\n", fr3);
	printf("%d\n", sizeof(fr3)); // �ѱ� 2byte

	//// �̸��� �Է¹޾� ����ϴ� ���α׷�
	//char name[20];
	//printf("����� �̸��� �����Դϱ�? ");
	//scanf("%s", name); // �迭������ �ּҿ�����(&) ���x
	//printf("����� �̸��� %s�̱���.\n", name);

	//int age;
	//printf("����� ���̴� ��Դϱ�? ");
	//scanf("%d", &age);
	//printf("����� ���̴� %d���̱���.\n", age);

	//	�迭�� �̸��� �迭�� ���� �ּ��̴�
	int arr[] = { 10,20,30 };
	//%x - �޸��ּ�(16����)
	printf("%x  %x  %x\n", &arr[0], &arr[1], &arr[2]);
	printf("%x  %x  %x\n", arr, arr + 1, arr + 2);


	return 0;
}