#include<stdio.h>
#incldue<stdlib.h>
char matrix[3][3]={'_','_','_','_','_','_','_','_','_'};
// check over
int isOver(){
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			sum+=matrix[i][j];
		}
		if(sum==('X'+'X'+'X')||sum==('O'+'O'+'O')) return sum/3;
	}
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<3;j++){
			sum+=matrix[j][i];
		}
		if(sum==('X'+'X'+'X')||sum==('O'+'O'+'O')) return sum/3;
	}
	if(matrix[1][1]==matrix[0][0]&&matrix[1][1]==matrix[2][2]) return matrix[1][1];
	if(matrix[1][1]==matrix[2][0]&&matrix[1][1]==matrix[0][2]) return matrix[1][1];
	return 0;
}
//check full
int isFull(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(matrix[i][j]=='_') return 1;
		}
	}
	return 0;	
}
// print matrix
void printMatrix(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("[%3c]",matrix[i][j]);
		}
		printf("\n");
	}

}
// insert
void inser(int i,int j, int userTurn){
	matrix[i][j]=(userTurn==1?'X':'O');
}
int main(){
// check over
// check full
// if not : play
	int userTurn=0;
	char user1[50];
	char user2[50];
	printf("\nPlayer 1 : Input your name \t");
	fflush(stdin);
	gets(user1);
	printf("\nPlayer 2 : Input your name \t");
	fflush(stdin);
	gets(user2);
	printf("\nPress anykey to begin your match");
	
	return 0;
}