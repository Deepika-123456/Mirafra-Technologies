#include<stdio.h>
 #include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<string.h>
  int main()
   {
           pid_t pid;
	   int x,y,z;
           getchar();
           pid = fork();
   
          if(pid == -1)
          perror("fork fails");
  
          if(pid == 0)
          {
		  exit(0);
                  sleep(1);
		  x=200;
		  y=100;
		  z=50;
                  printf("children process pid:%d\n",getpid());
                  printf("children process parent pid:%d\n",getppid());
		  printf("%d\n%p\n%d\n%p\n%d\n%p\n",x,&x,y,&y,z,&z);
	          
  
         }
          else
          {      
		pid = wait(&status);
                 sleep(2);
                  printf("parent process pid:%d\n",getpid());
                  printf("parent process parent pid:%d\n",getppid());
             	    x=200;
                    y=100;
                    z=50;
                  printf("%d\n%p\n%d\n%p\n%d\n%p\n",x,&x,y,&y,z,&z);

          }
  
  }
                               
