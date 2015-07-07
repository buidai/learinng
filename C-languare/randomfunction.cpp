//=================================================
/*
FileName	: 	randomFunction.cpp
Author		:	bui.quoc.dai
Date		:	04/07/2015
Note		:
*/
//=================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int r;
  srand(time(NULL));
  r=rand()%101+10;// rand()%100+101 <=> 101 --> 101+100 rand () %100 <=> 0-->100
   printf("%d\n",r);
}  
