#include<stdio.h>

int main() {
	// 요소가 5개인 정수형 배열 score 선언
	int score[] = { 86, 70, 90, 70, 85 };
	int total = 0; // 합계 변수 0으로 설정
	double avg = 0.0; // 평균 변수
	
	// 특정 요소에 접근(조회)
	printf("score[0] = %d\n\n",score[0]);
	
	// 요소 수정
	score[2] = 95;
	printf("score[2] = %d\n\n", score[2]);
	
	for (int i = 0; i < 5; i++) {
		printf("score[%d] = %d\n",i, score[i]);
	}
	
	// 요소의 합계
	printf("%d\n", score[0] + score[1]);
	
	for (int i = 0; i < 5;
		i++) {
		total += score[i];
		printf("%d까지 합계 : %d\n", i+1, total);
	}
	printf("합계 : %d\n", total);
	
	// 요소의 평균

	avg = (double)total / 5;
	printf("평균 : %.2f\n", avg);



	
	return 0;
}