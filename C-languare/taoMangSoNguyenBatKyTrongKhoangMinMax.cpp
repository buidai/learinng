//=================================================
/*
FileName	: 	randomFunction.cpp
Author		:	bui.quoc.dai
Date		:	04/07/2015
Note		:
*/
//=================================================
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int findMin(int n,int aA[])
{ 
	int dem=0;
	int iMin=aA[0];
	for(int i=0;i<n;i++){
		if(iMin>aA[i]){
			iMin=aA[i];
			dem=i;
		}
	}
	return dem;
}
int findMax(int n,int aA[])
{ 
	int iMax,dem=0;
	iMax=aA[0];
	for(int i=0;i<n;i++){
		if(iMax<aA[i]){
			iMax=aA[i];
			dem=i;
		}
	}
	return dem;	
}

main() 
{
	int aA[50],n,iLongArr,aB[32767],iMin,iMax;
	do{
		printf("nhap vao so phan tu mang :  ");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++)
	{
		printf("\naA[%d]=	",i);
		scanf("%d",&aA[i]);
	}
	printf("\n mang vua nhap la :  ");
	for(int i=0;i<n;i++)
	{
		printf("	%d",aA[i]);
	}
	printf("\n phan tu nho nhat la 	aA[%d]=%d",findMin(n,aA),aA[findMin(n,aA)]);
	printf("\n phan tu lon nhat la 	aA[%d]=%d",findMax(n,aA),aA[findMax(n,aA)]);
	srand(time(NULL));
	iLongArr=rand() % (aA[findMax(n,aA)]-aA[findMin(n,aA)]+1)+aA[findMin(n,aA)];
	if(iLongArr<=0){
		printf("\n gia tri ngau nhien nhan gia tri am. nen mang khong ton tai");
	}
	else{
		printf("\n so phan tu ngau nhien cua mang la %d",iLongArr);
		for(int i=0;i<iLongArr;i++){
			aB[i]= rand()%(aA[findMax(n,aA)]-aA[findMin(n,aA)]+1)+aA[findMin(n,aA)];
		}
		printf("\n mang ngau nhien %d phan tu",iLongArr);
		for(int i=0;i<iLongArr;i++){
			printf("\n	aB[%d]=%d",i,aB[i]);
	}
	}
	
}
