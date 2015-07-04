//=================================================
/*
FileName	: 	gtAmNhoNhat
Author		:	bui.quoc.dai
Date		:	04/07/2015
Note		:
*/
//=================================================
#include<stdio.h>
#include<conio.h>
main()
{
	int n,A[100],max = 0;
	do{
		printf("nhap so phan tu mang sao cho 3<n<35 :		");
		scanf("%d",&n);
	}while(n<=3||n>=35);
	printf("\n moi nhap mang	");
	for(int i=0;i<n;i++)
	{
		printf("\nA[%d]=	",i);
		scanf("%d",&A[i]);
	}
	printf("\n mang vua nhap la :  ");
	for(int i=0;i<n;i++)
	{
		printf("	%d",A[i]);
	}
	int diff =0;
	for(int i=0;i<n;i++)
	{
		if(A[i]<0) {
			max = A[i];
			diff = i;
			break;
		}
	}
	if(max>=0)
	{
		printf("\nkhong co gia tri am nao trong mang");
	}
	else{
		for(int i=diff;i<n;i++)
		{
			if(A[i]<0&&max<A[i])
				max=A[i];
		}
		printf("\n gia tri am lon nhat trong mang la %d",max);
	}
		
}
