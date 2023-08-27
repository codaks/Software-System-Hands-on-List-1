#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdlib.h>
#include<stdio.h>
#include <strings.h>

int main(){
	struct {
		int ticket_no;
	}db;
        struct flock lock;
        int fd;
        fd = open("db", O_RDWR);
        lseek(fd,0, SEEK_SET);
	bzero(&db,sizeof(db));
	read(fd,&db,sizeof(db));
	lock.l_type = F_WRLCK;
        lock.l_whence= SEEK_SET;
        lock.l_start=0;
        lock.l_len=0;
        lock.l_pid=getpid();
        printf("Before entering into critical section\n");
        fcntl(fd,F_SETLKW,&lock);
	printf("Current Ticket Number %d\n",db.ticket_no);
	db.ticket_no++;
	lseek(fd,0, SEEK_SET);
        printf("Inside the critical section\n");
        printf("Enter to Unlock\n");
	write(fd,&db,sizeof(db));
        getchar();
        printf("Unclocked\n");
        lock.l_type = F_UNLCK;
        fcntl(fd,F_SETLK,&lock);
        printf("finish\n");
}

