//=================================================
/*
FileName	: 	taoSoNguyenBatKy.cpp
Author		:	bui.quoc.dai
Date		:	04/07/2015
Note		:
*/
//=================================================
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int randomFunction(int a,int b){
	int r;
	srand(time(NULL));
	if(a>b){
		r=rand()%(a-b+1)+b;
	}
	if(a<b){
		r=rand()%(b-a+1)+a;
	}
	if(a==b){
		r=a;
	}
	return r;
}
main()
{
	int iN1,iN2;
	printf("nhap khoang so nguyen bat ky :	");
	scanf("%d%d",&iN1,&iN2);
	printf("\n so nguyen bat ky trong khoang %d - %d la %d",iN1,iN2,randomFunction(iN1,iN2));
}

