/*
============================================================================
Name : 21.c
Author : Chitransh Kulshrestha
Description : Write a program, call fork and print the parent and child process id.
Date: 8th sep, 2023.
============================================================================
*/

#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	if(fork()){
		printf("Parent Process: %d",getpid());
	}
	else{
		printf("Child Process: %d",getpid());
	}
	return 0;
}
