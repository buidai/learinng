//=============================================
/*
	File name	: 	kiemTraTinhNguyenTo.cpp
	Author		:	bui.quoc.dai
	Date		:   05/7/2015(dd/mm/yy)
	Note		:
*/
//=============================================
#include<stdio.h>
#include<conio.h>
#include<math.h>
int soNguyenTo (int iSo)
{
	int i;
	if(iSo < 2){
		return 0;
	}
	for(i=2;i<=sqrt(iSo);i++){
		if(iSo%i==0){
		return 0;
		break;
		}
	}
	return 1;
}   
main()
{
	int iSo;
	do{
 		printf("nhap vao 1 so nguyen duong  :	  ");
 		scanf("%d",&iSo);
 	}while(iSo<=0);
 	if(soNguyenTo(iSo)==0){
 		printf("\n%d  khong phai so nguyen to ",iSo);
 	}
 	else{
 		printf("\n %d la so nguyen to ",iSo);
 	}
}
