//===================================================
/* 
	File Name	:	tinhDoDaiXau.cpp
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	tinh do dai xau bang 2 cach
*/
//==================================================
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define size 100
main()
{
	char sLine[size];
	// xac dinh do dai xau ki tu bang cach thong thuong
	printf("\n Moi nhap mot xau ki tu kich thuoc %d phan tu \n\n",size);
	gets(sLine);
	int dem=0;
	while(sLine[dem]!='\0') dem++;
	printf("\n Xau ki tu ban vua nhap co %d ki tu\n",dem);
	getch();
	/* xac dinh do dai xau ki tu bang ham strlen trong thu vien string.h
	printf("\n Do dai xau ki tu la %d",strlen(sLine));
	*/

}
