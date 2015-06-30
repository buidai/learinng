//======================================
/*	
	FileName	:	sapXepMang
	Author		:	bui.quoc.dai
	Date		:	30/06/2015(dd/mm/yy)
*/
//=======================================
#include<stdio.h>
#include<conio.h>
int i,n,A[100];
void nhapMang()
{
	do{
		printf("nhap mang n phan tu voi 5<=n<=30 \n");
		scanf("%d",&n);
	}while(n<5||n>30);
	for(i=0;i<n;i++)
	{
		printf("\nA[%d]=	 ",i);
		scanf("%d",&A[i]);
	}
}
void hienThiMang()
{
	printf("mang vua nhap la \n ");
	for(i=0;i<n;i++)
		printf("	%d",A[i]);
}
void sapXepMang()
{
	int j,tg;
	printf("\n sap xep mang theo chieu tang dan \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				tg=A[i];
				A[i]=A[j];
				A[j]=tg;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
}
main()
{
	nhapMang();
	hienThiMang();
	sapXepMang();
}
