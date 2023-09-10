/*
============================================================================
Name : 7.c
Author : Chitransh Kulshrestha
Description : Write a program to copy file1 into file2 ($cp file1 file2).
Date: 8th sep, 2023.
============================================================================
*/

#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	if(argc!=3){
		printf("You are useless");
		return 0;
	}
	printf("%d/n",argc);
	printf("%s",argv[1]);

	int fd_read = open(argv[1],O_RDONLY);
	int fd_write = open(argv[2], O_WRONLY | O_CREAT,0666);
	
	if(fd_read==-1 && fd_write){
		printf("Useless");
	}

	while(1){
		char buf;
		int char_read = read(fd_read, &buf,1);
		if(char_read==0)
			break;
		int char_writen = write(fd_write,&buf,1);

	
	}
	int fd_read_close = close(fd_read);
	int fd_write_close= close(fd_write);
	if(fd_read_close == -1 || fd_write_close==-1)
		printf("File Not Created");
	return 0;
}

