//=================================================
/*
FileName	: 	findMinMax.cpp
Author		:	bui.quoc.dai
Date		:	04/07/2015
Note		:
*/
//=================================================
#include<stdio.h>
#include<conio.h>

int findMin(int n,int aA[])
{ 
	int viTri=0;
	int iMin=aA[0];
	for(int i=0;i<n;i++){
		if(iMin>aA[i]){
			iMin=aA[i];
			viTri=i;
		}
	}
	return viTri;
}
int findMax(int n,int aA[])
{ 
	int iMax,viTri=0;
	iMax=aA[0];
	for(int i=0;i<n;i++){
		if(iMax<aA[i]){
			iMax=aA[i];
			viTri=i;
		}
	}
	return viTri;	
}
main()
{
	int aA[50],n;
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
}
