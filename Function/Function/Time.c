#include<stdio.h>
#include<time.h>
#include<Windows.h>

int main() {
	// 시간 함수 - time()
	time_t now;  // time_t 자료형
	//now = time(NULL);
	time(&now);  // now의 주소를 매개변수로 전달

	printf("1970년 1월 1일(0시 0분 0초) 이후 %ld초\n", now);
	// 일로 환산
	printf("1970년 1월 1일(0시 0분 0초) 이후 %ld일\n", now/(24*60*60));
	// 년으로 환산
	printf("1970년 1월 1일(0시 0분 0초) 이후 %ld년\n", now / (24 * 60 * 60*365));

	// 수행시간
	// 1~10까지 출력(for문)
	time_t start, end;
	time(&start);
	for (int i = 1 ; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500);  // 1초 대기시간
	}
	time(&end);
	printf("수행시간 : %ld초\n", (end - start));



	return 0;
}