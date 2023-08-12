#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    const char *fifo_path ="./fifo_file";

    if (mkfifo(fifo_path, 0666) == 0) {
        printf("FIFO file created successfully.\n");
    } else {
        perror("Error creating FIFO file");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

