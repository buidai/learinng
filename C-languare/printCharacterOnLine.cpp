//========================================================
/* 
	File Name	:	printCharacterOnLine.cpp	
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	in moi ky tu cua xau tren mot dong
*/
//========================================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 50
void printCharacterOnLine(char *s)
{
	int t;
	for(t=0;t<strlen(s);t++){
		printf("\n %c",s[t]);
	}
}
main()
{
	char str[size];
	do{
		printf("\n Nhap xau co %d ki tu bat ki: \n",size);
		fflush(stdin);
		gets(str);
	}while(strlen(str)>size);
	printf("\n Hien thi moi ki tu cua xau ki tu tren mot dong: \n");
	printCharacterOnLine(str);
	getch();
	
}
