#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main()
{
	time_t ct;  // ���� �ð��� �˱����� time_t ���� ����
	struct tm* now; // tm ����ü�� ��ü ����
	
	time(&ct);
	now = localtime(&ct);  // ��¥ ������

	printf("���� �⵵ : %d\n", now->tm_year + 1900);
	printf("���� �� : %d\n", now->tm_mon + 1);
	printf("���� �� : %d\n", now->tm_mday);
	printf("���� ��¥ : %d. %d. %d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
	
	printf("���� �� : %d\n", now->tm_hour);
	printf("���� �� : %d\n", now->tm_min);
	printf("���� �� : %d\n", now->tm_sec);
	printf("���� �ð� : %d : %d : %d\n", now->tm_hour, now->tm_min, now->tm_sec);

	printf("���� ���� : %d\n", now->tm_wday);  // 0-��, 1-��, 2-ȭ, 3-�� ...
	if (now->tm_wday == 0) printf("������ �Ͽ����Դϴ�.\n");
	if (now->tm_wday == 1) printf("������ �������Դϴ�.\n");
	if (now->tm_wday == 2) printf("������ ȭ�����Դϴ�.\n");
	if (now->tm_wday == 3) printf("������ �������Դϴ�.\n");
	if (now->tm_wday == 4) printf("������ ������Դϴ�.\n");
	if (now->tm_wday == 5) printf("������ �ݿ����Դϴ�.\n");
	if (now->tm_wday == 6) printf("������ ������Դϴ�.\n");

	switch (now->tm_wday) 
	{
	case 0 : printf("������ �Ͽ����Դϴ�.\n"); break;
	case 1: printf("������ �������Դϴ�.\n"); break;
	case 2: printf("������ ȭ�����Դϴ�.\n"); break;
	case 3: printf("������ �������Դϴ�.\n"); break;
	case 4: printf("������ ������Դϴ�.\n"); break;
	case 5: printf("������ �ݿ����Դϴ�.\n"); break;
	case 6: printf("������ ������Դϴ�.\n"); break;
	}

	return 0;
}