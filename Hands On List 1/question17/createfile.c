#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
        
	int fd_write = open("db", O_WRONLY | O_CREAT);
	if(fd_write==-1){
                printf("Useless");
        }

	char ticket_no;
	printf("Enter Ticket Number: ");
	scanf("%c",&ticket_no);
	int char_writen = write(fd_write,&ticket_no,1);
	int fd_write_close= close(fd_write);
        if(fd_write_close==-1)
                printf("File Not Created");

}

