#include<stdio.h>

int main() {
	// ��Ұ� 5���� ������ �迭 score ����
	int score[] = { 86, 70, 90, 70, 85 };
	int total = 0; // �հ� ���� 0���� ����
	double avg = 0.0; // ��� ����
	
	// Ư�� ��ҿ� ����(��ȸ)
	printf("score[0] = %d\n\n",score[0]);
	
	// ��� ����
	score[2] = 95;
	printf("score[2] = %d\n\n", score[2]);
	
	for (int i = 0; i < 5; i++) {
		printf("score[%d] = %d\n",i, score[i]);
	}
	
	// ����� �հ�
	printf("%d\n", score[0] + score[1]);
	
	for (int i = 0; i < 5;
		i++) {
		total += score[i];
		printf("%d���� �հ� : %d\n", i+1, total);
	}
	printf("�հ� : %d\n", total);
	
	// ����� ���

	avg = (double)total / 5;
	printf("��� : %.2f\n", avg);



	
	return 0;
}