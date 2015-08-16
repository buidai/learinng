//==========================================
/*
	File Name	:	convert2stringsToAString.cpp
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	ghep 2 xau thanh mot xau
*/
//=========================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 100
main()
{
	char str[size],str1[size],str2[size];
	printf("\n Nhap vao xau ki tu thu nhat : \n ");
	fflush(stdin);
	gets(str1);
	printf("\n Nhap vao xau ki tu thu hai : \n");
	fflush(stdin);
	gets(str2);
	strcpy(str,strcat(str1,str2));
	printf("\n Xau sau khi ghep \n");
	puts(str);
}
