//=============================================
/*
	File name	: 	soSanh2SoNguyenDuong.cpp
	Author		:	bui.quoc.dai
	Date		:   05/7/2015(dd/mm/yy)
	Note		:
*/
//=============================================
#include<stdio.h>
#include<conio.h>
main()
{
 	int a,b;
 	do{
 		printf("nhap vao 2 so nguyen duong a, b :\n  ");
 		scanf("%d%d",&a,&b);
 	}while(a<=0||b<=0);
 	if(a>b){
 		printf("\n%d lon hon %d ",a,b);
 	}
 	if(a<b){
 		printf("\n%d nho hon %d",a,b);
 	}
 	if(a==b){
 		printf("\n%d bang %d",a,b);
 	}
}
