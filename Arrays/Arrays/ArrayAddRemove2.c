#include<Stdio.h>
#define MAX_LEN 4  // ���

int main() {

	// ������ �迭 ����
	int carts[MAX_LEN];
	int idxOfCarts = 0;

	// ��� ����
	if (idxOfCarts >= MAX_LEN) 
	{
		printf("�� �̻� ������ �� �����ϴ�");
		return;
	}
	
	
	carts[idxOfCarts++] = 80;
	carts[idxOfCarts++] = 70;
	carts[idxOfCarts++] = 95;
	carts[idxOfCarts++] = 90;
	


	/*printf("%d\n", idxOfCarts);
	printf("%d\n", carts[idxOfCarts]);*/

	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d", carts[i]);
	}

	printf("\n\n");

	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	
	if (idxOfCarts < 0)
	{
		printf("�� �̻� ������ �� �����ϴ�\n");
	}

	// �ݺ������� �Է� �ޱ�
	while (1)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &carts[idxOfCarts++]);

		if (idxOfCarts >= MAX_LEN)
		{
			puts("�� �̻� �߰��� �� ����");
			return;
		}
	}

	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d\n", carts[i]);
	}

	return 0;
}