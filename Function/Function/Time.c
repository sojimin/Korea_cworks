#include<stdio.h>
#include<time.h>
#include<Windows.h>

int main() {
	// �ð� �Լ� - time()
	time_t now;  // time_t �ڷ���
	//now = time(NULL);
	time(&now);  // now�� �ּҸ� �Ű������� ����

	printf("1970�� 1�� 1��(0�� 0�� 0��) ���� %ld��\n", now);
	// �Ϸ� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��) ���� %ld��\n", now/(24*60*60));
	// ������ ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��) ���� %ld��\n", now / (24 * 60 * 60*365));

	// ����ð�
	// 1~10���� ���(for��)
	time_t start, end;
	time(&start);
	for (int i = 1 ; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  // 1�� ���ð�
	}
	time(&end);
	printf("����ð� : %ld��\n", (end - start));



	return 0;
}