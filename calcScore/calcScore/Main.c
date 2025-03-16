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


	printf("======성적 관리 프로그램======\n");

	for (i = 0;i < 3;i++)
	{
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);

		printf("%d번째 학생의 이름 입력: ", i + 1);
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("수학점수 입력: ");
		scanf_s("%d", &s[i].score.math);

		printf("영어점수 입력: ");
		scanf_s("%d", &s[i].score.eng);
	}

	printf("======================\n");

	printf("학번\t이름\t수학\t영어\n");

	for (i = 0;i < 3;i++)
	{
		total[0] += s[i].score.math;
		total[1] += s[i].score.eng;

		showStudentInfo(s[i]);
	}

	avg[0] = (double)total[0] / 3;
	avg[1] = (double)total[1] / 3;
	printf("======================\n");

	printf("수학 총점: %d, 영어 총점: %d\n", total[0], total[1]);
	printf("수학 평균: %.1lf, 영어 평균: %.1lf\n", avg[0], avg[1]);

	return 0;
}

void showStudentInfo(Student student)
{
	printf("%d\t%s\t%d\t%d\n", student.number, student.name,
		student.score.math, student.score.eng);
}


