#include<stdio.h>

int main() 
{
	// ���ڿ� - 1���� �迭
	// char word[] = "apple";  
	// printf("%s\n", word);
	
	// 2���� �迭 - word[�ܾ��][ö���� �ִ밳��]
	char word[][10] = { "apple", "banana", "grape"};
	int size;

	// printf("%s\n", word[0]);
	// printf("%s\n", word[1]);
	
	size = sizeof(word) / sizeof(word[0]);
	printf("%d %d\n", sizeof(word), sizeof(word[0]));

	for (int i = 0; i < size;i++) 
	{
		printf("%s\n", word[i]);
	}

	printf("===================================\n");
	
	// ���ڿ� ������
	char *fruit[] = { "apple", "banana", "grape"};

	printf("%s\n", fruit[0]);
	printf("%s\n", fruit[1]);

	return 0;
}