#include<Stdio.h>

// �Լ��� �Ű������� ������ ���
// int *a = arr
void changeArray(int *a)   // int a[] -> �Ű������� �迭
{
	a[1] = 50;
}

int main()
{
	int arr[] = { 10, 20, 30 };

	// arr[1] = 50;

	changeArray(arr); // �Լ� ȣ��

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}









	return 0;
}