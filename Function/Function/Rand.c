#include<stdio.h>
#include<stdlib.h>  //srand(), rand()
#include<time.h>

int main() 
{
	// rand() - ����(������ ��)
	
	int rndVal;
	int coin;
	int dice;

	// srand(11); // seed�� ����
	srand(time(NULL)); // �ð��� �帣�Ƿ� �Ź� seed�� �ٲ�

	rndVal = rand();
	
	printf("%d\n", rndVal);

	// ����
	coin = rand() % 2;
	printf("����: %d\n", coin);

	if (coin == 0) printf("�ո�\n");
	else printf("�޸�\n");

	// �ֻ���
	dice = rand() % 6 + 1;  //������ 0~5�� 1���� -> �ֻ��� 1~6
	printf("�ֻ��� �� : %d\n", dice);

	//�ֻ��� 10�� ������

	for (int i = 0; i < 10; i++) {
		dice = rand() % 6 + 1;
		printf("%d��° ��� : %d\n", i, dice);
	}

	// ������� �����ϰ� ���
	char season[4][5] = { "��", "����","����", "�ܿ�" };
	int rndIdx = 0;

	rndIdx = rand() % 4;  // ������ 0~3
	printf("%s\n\n", season[rndIdx]);

	//������� �����ͷ� ����
	char* season2[] = { "��", "����", "����", "�ܿ�" };
	
	printf("���� : %s\n", season2[rndIdx]);


	
	
	return 0;
}