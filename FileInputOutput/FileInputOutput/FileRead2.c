//#include<stdio.h>
//
//int main_FileWrite2() {
//
//	//�ƽ�Ű(�ڵ尪) ���� �б�
//	FILE* fp;
//	int ch; // ���� ���� 1��
//	char buffer[256];  //���� �����͸� ������ �迭
//
//	fopen_s(&fp, "ascii.txt", "r");
//	if (fp == NULL)
//	{
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	// ���� �б� - fgetc
//	//while (1){
//	//	ch = fgetc(fp);
//	//	if (ch == EOF) break;
//	//	printf("%c", ch);
//	//}
//
//	/*while ((ch = fgetc(fp)) != EOF)
//	{
//		printf("%c", ch);
//	}*/
//
//	//fgets()
//	while (fgets(buffer, sizeof(buffer), fp) != NULL)
//	{
//		printf("%s", buffer);
//	}
//	
//
//
//
//	fclose(fp);
//
//
//	system("pause");
//	return 0;
//}