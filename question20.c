#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <unistd.h>

int main(int args, char* arg[]) {
    int priority;
    
    priority = getpriority(PRIO_PROCESS, getpid());
    if (priority == -1) {
        perror("Error getting priority");
        return 1;
    }

    printf("Current priority: %d\n", priority);

    
    int new_priority = priority - 5; 
    if (nice(new_priority) == -1) {
        perror("Error setting new priority");
        return 1;
    }

    printf("New priority: %d\n", getpriority(PRIO_PROCESS, getpid()));

    return 0;
}

