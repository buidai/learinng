//=============================================
/*
	File name	: 	giaiPhuongTringB2.cpp
	Author		:	bui.quoc.dai
	Date		:   05/7/2015(dd/mm/yy)
*/
//=============================================


#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,x1,x2,delta;
	printf("giai phuong trinh bac 2 co dang ax^2+bx+c=0 \n");
	do{
		printf("\nnhap 3 he so  a,b,c tuong ung cua phuong trinh (a#0):  ");
		scanf("%f%f%f",&a,&b,&c);
			if(a==0)
		{
			printf("\n vui long nhap lai");
			getch();
		}
	}while(a==0);
	delta=b*b-4*a*c;
	if(delta<0){
		printf("\n phuong trinh vo nghiem ");
	}
	if(delta==0){
		printf("\n phuong trinh da cho co nghiem kep: \n");
		printf("x1	=	x2	=	%f",-b/(2*a));
	}
	if(delta>0){
		printf("\n phuong trinh co 2 nghiem phan biet: \n");
		printf("\n x1	=	%f \n x2	=	%f	",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
	}
	getch();
}
