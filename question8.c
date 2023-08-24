// C program to illustrate
// read system Call
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	if(argc!=2){
		printf("You are useless");
		return 0;
	}
	
	int fd_read = open(argv[1],O_RDONLY);
	//int fd_write = open(argv[2], O_WRONLY | O_CREAT);
	
	if(fd_read==-1 ){
		printf("Useless");
	}

	while(1){
		char buf;
		int char_read = read(fd_read, &buf,1);
		if(char_read==0)
			break;
		printf("%c", buf);

	
	}
	int fd_read_close = close(fd_read);
	//int fd_write_close= close(fd_write);
	if(fd_read_close == -1)
		printf("Unable to Read");
	return 0;
}

