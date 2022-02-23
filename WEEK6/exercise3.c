#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    fork();
    fork();
    fork();
    printf("Called fork() system call\n");
    return 0;
}
