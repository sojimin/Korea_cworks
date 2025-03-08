#include<Stdio.h>
#define MAX_LEN 4  // 상수

int main() {

	// 정수형 배열 생성
	int carts[MAX_LEN];
	int idxOfCarts = 0;

	// 요소 저장
	if (idxOfCarts >= MAX_LEN) 
	{
		printf("더 이상 저장할 수 없습니다");
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
		printf("더 이상 삭제할 수 없습니다\n");
	}

	// 반복문으로 입력 받기
	while (1)
	{
		printf("점수 입력: ");
		scanf_s("%d", &carts[idxOfCarts++]);

		if (idxOfCarts >= MAX_LEN)
		{
			puts("더 이상 추가할 수 없음");
			return;
		}
	}

	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d\n", carts[i]);
	}

	return 0;
}