#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h> 
using namespace std;



int isNhuan(long n){
	if((n%4 ==0||n%400==0)&& n%100!=0){
		return 1;
	}else{
		return 0;
	}
}

main()
{
	int n = 10;
	int  aYear[n];
	int min= 2000, max = 2100;
	srand (time(NULL));
	
	for(int i=0;i<n;i++){
		
		//aYear[i] = rand() % 100;
		aYear[i] = rand() % (max + 1 - min) + min;
		
	}
	
	
	for(int i=0;i<n;i++){
		if(isNhuan(aYear[i])){
			printf("\n %d la nam nhuan !",aYear[i]);
		}else{
			printf("\n %d khong phai nam nhuan !",aYear[i]);
		}
	}
	

}












