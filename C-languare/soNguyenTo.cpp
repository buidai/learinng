//=============================================
/*
	File name	: 	soNguyenTo.cpp
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
	int iN,i;
	do{
		printf("nhap vao mot so nguyen duong bat ky : ");
		scanf("%d",&iN);
	}while(iN<=0);
	printf("\n so nguyen to trong khoang tu 0 --> %d la \n",iN);
	for(i=1;i<=iN;i++){
		if(soNguyenTo(i)==1){
			printf("	%d",i);
		}
	}
}
