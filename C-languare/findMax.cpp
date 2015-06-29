//==========================================================
/*
	FileName	: findMax.cpp
	Author		: bui.quoc.dai
	Date		: 29/06/2015 (dd/mm/yy)	
	Note		:
*/
//==========================================================

#include "stdio.h"
#include "conio.h"
#include "windows.h"

main (){
	int a,b,max,min;
    lap:
	system("cls");
	printf("\n nhap hai so a,b: ");
	scanf("%d%d",&a,&b);
	if(a>b)
     {
	   max=a;// test change
	   min=b;
     }
	else
	  {
		max=b;
		min=a;
      }
     if(a==b) printf("hai so bang nhau ");
     else printf("%d la min\n%d la max",min,max);
	 getch();
	 goto lap;
}
