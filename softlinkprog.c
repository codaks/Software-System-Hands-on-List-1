#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *target = "./orignal_link";
    const char *link_name = "./hardlink_prg";

    if (symlink(target, link_name) == 0) {
        printf("Symbolic link created successfully.\n");
    } else {
        perror("Error creating symbolic link");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

