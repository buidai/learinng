//========================================================
/* 
	File Name	:	convertCharactersToASCII.cpp	
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	chuyen xau ki tu thanh ma ASCII
*/
//========================================================
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define size 50
void convertCharactersToASCII(char *s)
{
	int t;
	for(t=0;t<=strlen(s);t++){
		printf(" %d",s[t]);
	}
}
main()
{
	char str[size];
	do{
		printf("  Nhap mot xau %d ky tu bat ky:\n ",size);
		fflush(stdin);
		gets(str);
	}while(strlen(str)>size);
	printf("\n  Ma ASCII cua xau vua nhap: \n");
	convertCharactersToASCII(str);
	getch();
}
