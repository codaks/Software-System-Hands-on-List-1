/*
============================================================================
Name : 23.c
Author : Chitransh Kulshrestha
Description : Write a program to create a Zombie state of the running program.
Date: 8th sep, 2023.
============================================================================
*/


#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{	
	int pid = fork();

	if (pid > 0)
		printf("in parent process\n");

	else if (pid == 0)
	{
		sleep(30);
		printf("in child process\n");
	}

	return 0;
}
