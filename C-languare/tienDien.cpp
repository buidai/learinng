#include<stdio.h>
#include<conio.h>
#include <windows.h>
main()
{
    int n,t;
    lap:
    system("cls");
	printf("nhap so dien cua gia dinh ban \t");
    scanf("%d",&n);

    if(n>0)
    {
        if(n<=100)
        {
            t=100*750;
        }
        else if(n<=200)
        {
            t=100*750+(n-100)*1250;
        }
        else if(n<=300)
        {
            t=100*750+100*1250+(n-200)*1270;
        }
        else
        {
            t=100*750+100*1250+100*1270+(n-300)*3000;
        }
        printf("%d VND",t);
    }
    else
    {
        printf ("moi nhap lai");
        goto lap;
    }

}

