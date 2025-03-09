#include<stdio.h>

int main()
{
	int a[2][2];
	int i, j;

	a[0][0] = 1;
	a[0][1] = 2;
	a[1][0] = 3;
	a[1][1] = 4;

	printf("a[0][0] = %d\n", a[0][0]);
	printf("a[1][1] = %d\n\n", a[1][1]);

	for (i = 0; i < 2;i++) {
		for (j = 0;j < 2;j++) {
			printf("a[%d][%d]= %d\n", i, j, a[i][j]);
		}
	}

	// 2차원 배열 선언과 함께 초기화
	int arr[3][2] = { 
		{75,80}, 
		{85,95}, 
		{90,100} };

	int sum = 0;
	double average = 0.0;
	int count = 0;

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 2;j++) {
			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
		}
	}

	for (i = 0;i < 3;i++) {
		for (j = 0;j < 2;j++) {
			sum += arr[i][j];
			count++;
		}
	}

	average = (double)sum / count;
	printf("합계 : %d\n", sum);
	printf("평균 : %.2lf\n", average);





	return 0;
}