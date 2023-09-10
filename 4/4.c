/*
============================================================================
Name : 4.c
Author : Chitransh Kulshrestha
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 8th sep, 2023.
============================================================================
*/


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>

int main(int argc,char* args[]){
	if(argc!=2)
		printf("Input File name not given/n");
	int fd = open(args[1],O_CREAT| O_EXCL);
	if(fd == -1)
		printf("File Already Created\n");
	else
		printf("File Scucessuly Create\n");
	return 0;
}
