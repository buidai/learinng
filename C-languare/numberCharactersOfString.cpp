//========================================================
/* 
	File Name	:	numberCharactersOfString.cpp	
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	dem so ky tu cua xau
*/
//========================================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 500
main()
{
	char str[size];
	printf("\n Nhap xau  ki tu bat ki: \n");
	scanf("%[^\n]",str);
	printf("\n So ki tu cua xau la %d",strlen(str));
}
