//#define _CRT_SECURE_NO_WARNINGS
//#include<Stdio.h>
//
////���� ����(����)
//int main_FileRead1()
//{
//	// ���� ������ ���� ����
//	FILE* fp;
//	int ch;
//	
//	fp = fopen("out.txt", "r"); // r - �б���
//	if (fp == NULL)
//	{
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//���� �б�
//	//�� ���� �б�
//	/*ch = fgetc(fp);
//	printf("%c\n", ch);*/
//
//	//��� ���� �б�
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF) {  // EOF : end of file
//			break;
//		}
//
//		printf("%c", ch);
//	}
//
//
//	fclose(fp);
//
//	return 0;
//}