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
