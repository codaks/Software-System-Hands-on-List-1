#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *original_file = "./orignal_link";
    const char *hard_link = "./sftlnk_prg";

    if (link(original_file, hard_link) == 0) {
        printf("Hard link created successfully.\n");
    } else {
        perror("Error creating hard link");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

