#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        // Parent process
        sleep(5);  
    } else if (pid == 0) {
        // Child process
        printf("Child process executing...\n");
    } else {

       perror("fork");
        return 1;
    }

        printf("Parent process exiting...\n");

    return 0;
}
/*the fork() function is used to create a child process. The child process prints a message, indicating that it is executing, and then terminates. However, the parent process sleeps for 5 seconds before exiting.
During this time, the child process becomes a zombie since it has completed execution, but the parent process has not yet acknowledged its termination. The entry for the child process remains in the process table.
After 5 seconds, the parent process exits, and the child process is repeteded by the operating system. The zombie process is removed from the process table, and its resources are freed.*/
