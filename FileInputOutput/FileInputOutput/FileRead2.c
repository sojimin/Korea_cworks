//#include<stdio.h>
//
//int main_FileWrite2() {
//
//	//아스키(코드값) 파일 읽기
//	FILE* fp;
//	int ch; // 읽은 문자 1개
//	char buffer[256];  //읽은 데이터를 저장할 배열
//
//	fopen_s(&fp, "ascii.txt", "r");
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	// 파일 읽기 - fgetc
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