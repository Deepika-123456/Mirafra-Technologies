#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t pid;
 pid = fork();
 pid = fork();
 pid = fork();
 pid = fork();
printf("good morning\n");
}
