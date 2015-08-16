#include<stdio.h>
#include<string.h>
#include<conio.h>
#define kichThuocMang 5
#define kichThuocDong 81
#define HALT  ""
void strst(char *string[],int num)
{
	char *temp;
	int top,seek,i;
	for(top=0;top<kichThuocMang-1;top++){
		for(seek=top+1;seek<num;seek++){
			if(strcmp(string[top],string[seek])>0){
				temp=string[top];
				string[top]=string[seek];
				string[seek]=temp;
			}
		}
	}
	printf("\n Mang x gom co cac phan tu");
	for(i=0;i<kichThuocMang;i++){
		printf("%7s 	",string[i]);
	}
}
main()
{
	char line[kichThuocMang][kichThuocDong];
	char *ptstr[kichThuocMang];
	int dem1=0,dem2,k;
	printf("Doc %d dong ki tu.\n",kichThuocMang);
	printf("/n De ket thuc nhan Enter.\n");
	while(dem1<kichThuocMang&&gets(line[dem1])!=NULL&&strcmp(line[dem1],HALT) !=0){
		ptstr[dem1]=line[dem1];dem1++;
	}
	strst(ptstr,dem1);
	puts("\n Day la mang da duoc sap xep.");
	for(k=0;k<dem1;k++){
		puts(ptstr[k]);
	}
}
