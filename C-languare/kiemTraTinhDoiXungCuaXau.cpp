//===================================================
/* 
	File Name	:	kiemTraTinhDoiXungCuaXau.cpp
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	Kiem tra tinh doi xung cua xau
*/
//==================================================
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define size 50
void tinhDoiXungCuaXau(char *s)
{
	char s1[size];
    strcpy(s1,s);
    strrev(s1);
    if (strcmp(s1,s)==0){
    	printf("\n Xau vua nhap  doi xung");
	}
	else 
		printf("\n Xau vua nhap khong doi xung");
}
main()
{
	char s[size];
	printf("\n Nhap vao mot xau ban muon kiem tra: \n");
	fflush(stdin);
	gets(s);
	tinhDoiXungCuaXau(s);
}
