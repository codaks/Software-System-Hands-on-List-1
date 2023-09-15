/*
============================================================================
Name : 5.c
Author : Chitransh Kulshrestha
Description : Write a program to create five new files with infinite loop. Execute the program in the background
              and check the file descriptor table at /proc/pid/fd.
Date: 8th sep, 2023.
============================================================================
*/

#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

	int fd1 = open("f1",O_CREAT,0666);
	int fd2 = open("f2",O_CREAT,0666);
	int fd3 = open("f3",O_CREAT, 0666);
	int fd4 = open("f4",O_CREAT,0666);
	int fd5 = open("f5",O_CREAT, 0666);
	
	while(1);
	return 0;
}
