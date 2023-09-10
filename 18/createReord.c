#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
struct {
	int train_num;
	int ticket_count;
} db[3];

int main() {
	int fd, input;
	fd = open("record.txt", O_CREAT | O_RDWR, 0666);
	
	for(int i = 1;i<=3;i++){
		db[0].train_num = i;
		db[0].ticket_count = 0;
	}	
	
	write(fd, &db, sizeof(db));
	close(fd);
	return 0;
}

