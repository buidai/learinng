#include<stdio.h>
int main(){
	char a[6]={10,20,30,40,50,60};
	char *p = a;
	int iVar = 10;
	int *p1 =  &iVar;
	int **p2 = &p1;
	printf("a = %d &a = %d *a = %d p = %d &p= %d *p = %d", a, &a, *a, p, &p, *p);
	**p2=5;	
	printf( "iVar = %d p1 = %d p2 = %d *p2= %d **p2 = %d",iVar,p1,p2,*p2,**p2);
	return 0;
}
