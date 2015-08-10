//===================================================
/* 
	File Name	:	vietXauTheoThuTuNguocLai.cpp
	Author		:	bui.quoc.dai
	Date		:	
	Note		:	Viet xau theo thu tu nguoc lai
*/
//==================================================
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define size 100
void print_reverse(char *s)
{
	register int t;
	for(t=strlen(s)-1;t>=0;t--){
		putchar(s[t]);
	}
}
main()
{
	char sLine[size];
	printf("\n Moi ban nhap mot xau ki tu \n");
	gets(sLine);
	printf("\n Xau ban vua nhap la : \n %s",sLine);
	printf("\n Viet xau theo thu tu nguoc lai \n \n");
	print_reverse(sLine);
}
