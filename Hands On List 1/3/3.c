/*
============================================================================
Name : 3rd.c
Author : Chitransh Kulshrestha
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call.
Date: 8th sep, 2023.
============================================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    const char *filename = "example.txt";
    mode_t mode = 0666; // Permissions for the created file

    // Create the file using the creat() system call
    int fd = creat(filename, mode);
    printf("File created successfully with descriptor: %d\n", fd);
	close(fd);
    int fd1 = creat("example1.txt", mode);
    int fd3 = creat("example2.txt", mode);

    if (fd == -1) {
        perror("Error creating the file");
        return 1;
    }

     printf("File created successfully with descriptor: %d\n", fd1);
      printf("File created successfully with descriptor: %d\n", fd3);
    close(fd1); // Close the file descriptor
	close(fd3);

    return 0;
}
