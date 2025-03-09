#include<stdio.h>
#include<stdlib.h>  //srand(), rand()
#include<time.h>

int main() 
{
	// rand() - 난수(무작위 수)
	
	int rndVal;
	int coin;
	int dice;

	// srand(11); // seed값 설정
	srand(time(NULL)); // 시간이 흐르므로 매번 seed가 바뀜

	rndVal = rand();
	
	printf("%d\n", rndVal);

	// 동전
	coin = rand() % 2;
	printf("동전: %d\n", coin);

	if (coin == 0) printf("앞면\n");
	else printf("뒷면\n");

	// 주사위
	dice = rand() % 6 + 1;  //나머지 0~5에 1더함 -> 주사위 1~6
	printf("주사위 눈 : %d\n", dice);

	//주사위 10번 던지기

	for (int i = 0; i < 10; i++) {
		dice = rand() % 6 + 1;
		printf("%d번째 결과 : %d\n", i, dice);
	}

	// 사계절을 랜덤하게 출력
	char season[4][5] = { "봄", "여름","가을", "겨울" };
	int rndIdx = 0;

	rndIdx = rand() % 4;  // 나머지 0~3
	printf("%s\n\n", season[rndIdx]);

	//사계절을 포인터로 선언
	char* season2[] = { "봄", "여름", "가을", "겨울" };
	
	printf("계절 : %s\n", season2[rndIdx]);


	
	
	return 0;
}