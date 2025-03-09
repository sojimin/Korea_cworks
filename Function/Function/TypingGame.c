#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>

int main() 
{
	char* words[] = { "ant", "bear", "chicken", "cow", "deer", "elephant",
	"fox", "horse", "monkey", "tiger" };

	char* question;
	char answer[20];
	int n = 1;
	clock_t start, end;
	double elapsed;
	int size, idx;

	srand(time(NULL));

	printf("영어 타자 게임, 준비되면 엔터>");
	getchar();

	start = clock();
	while (n <= 10)
	{
		printf("\n문제 %d\n", n);
		size = sizeof(words) / sizeof(words[0]);
		idx = rand() % size;
		question = words[idx];
		
		printf("%s\n", question);
		scanf_s("%s", answer, sizeof(answer));

		if (strcmp(question, answer) == 0) {
			printf("통과!\n");
			n++;
		}
		else {
			printf("오타! 다시 도전!\n");
		}
	}
	end = clock();
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간 : %.2lf초\n", elapsed);

	return 0;
}