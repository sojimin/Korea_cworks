#include<Stdio.h>

// 함수의 매개변수로 포인터 사용
// int *a = arr
void changeArray(int *a)   // int a[] -> 매개변수가 배열
{
	a[1] = 50;
}

int main()
{
	int arr[] = { 10, 20, 30 };

	// arr[1] = 50;

	changeArray(arr); // 함수 호출

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}









	return 0;
}