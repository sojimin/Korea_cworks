#include<stdio.h>

// �Լ� �����
void sayHello(); 
void sayHello2(char[]);  //�Ű������� �ڷ����� ǥ��

int main() {

	sayHello();  //�Լ� ȣ��

	sayHello2("����");
	sayHello2("jimin");

	return 0;
}

// �Լ� ����(��ü)
void sayHello()
{
	printf("�ȳ��ϼ���\n");
}

void sayHello2(char name[])
{
	printf("%s�� �ȳ��ϼ���\n",name);

}