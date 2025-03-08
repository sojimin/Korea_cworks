#include<stdio.h>
#include<math.h>

int main() {
	
	// 반올림 - round()
	printf("%.2f\n", round(2.54));
	printf("%.2lf\n", round(2.54));
	printf("%.2lf\n", round(2.14));

	// 내림(버림) - floor()
	printf("%.2f\n", floor(2.54));

	// 절대값 - abs()
	printf("%d\n", abs(8));
	printf("%d\n", abs(-8));

	return 0;
}