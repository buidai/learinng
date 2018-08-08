/*
	Program name is the name of executable file.
	argc : is an integer type of arguments, contains the total number of
		arguments/parameters supplied through the cmd line.
	argv[]: is an array of character pointer (string), contains the all parameters.
	program's name is the first parameter of parameter list.

*/
#include<stdio.h>
int  main(int argc, char *argv[]){
	printf("program's name is: %s\n", argv[0]);
	return 0;
}
