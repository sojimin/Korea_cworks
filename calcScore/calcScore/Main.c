#include<Stdio.h>

typedef struct
{
	int math;
	int eng;
}Score;

typedef struct
{
	int number;
	char name[20];
	Score score;
}Student;

void showStudentInfo(Student student);
int main()
{
	Student s[3];
	int i;
	int total[2] = { 0,0 };
	double avg[2] = { 0.0, 0.0 };


	printf("======���� ���� ���α׷�======\n");

	for (i = 0;i < 3;i++)
	{
		printf("�й� �Է�: ");
		scanf_s("%d", &s[i].number);

		printf("%d��° �л��� �̸� �Է�: ", i + 1);
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("�������� �Է�: ");
		scanf_s("%d", &s[i].score.math);

		printf("�������� �Է�: ");
		scanf_s("%d", &s[i].score.eng);
	}

	printf("======================\n");

	printf("�й�\t�̸�\t����\t����\n");

	for (i = 0;i < 3;i++)
	{
		total[0] += s[i].score.math;
		total[1] += s[i].score.eng;

		showStudentInfo(s[i]);
	}

	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;
	printf("======================\n");

	printf("���� ����: %d, ���� ����: %d\n", total[0], total[1]);
	printf("���� ���: %.1lf, ���� ���: %.1lf\n", avg[0], avg[1]);

	return 0;
}

void showStudentInfo(Student student)
{
	printf("%d\t%s\t%d\t%d\n", student.number, student.name,
		student.score.math, student.score.eng);
}


