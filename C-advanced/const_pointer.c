#include<stdio.h>
int main()
{
	int c=4;
	const int *p=&c;
	int d=5;
	p=&d;
	d+=1;
	printf("\n c = %d, d = %d *p= %d ",c,d,*p);
	return 0;
}
