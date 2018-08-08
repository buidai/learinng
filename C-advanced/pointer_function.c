#include<stdio.h>
int addition(int a,int b){
	return a+b;
}
int subtraction(int a,int b){
	return a-b;
}
int doSomeThing(int a, int b, int (*linhTinh)(int, int)){
	return linhTinh(a,b);
}
int main(int argv, char * argc[]){
	int a=10;
	int b=100;
	printf("\n Additon %d + %d = %d",a,b,doSomeThing(a,b,addition));
	printf("\nSubtractionn %d + %d = %d",a,b,doSomeThing(a,b,subtraction));
	return 0;
}
