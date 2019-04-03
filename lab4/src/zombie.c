#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>

int main(){
    pid_t child_pid=fork();
    if(child_pid>0){
        printf("Parrent process with pid - %d\n",getpid());
        sleep(40);
        exit(0);
    }
    else if(child_pid==0){
        printf("Child process with pid - %d\n",getpid());
        sleep(10);
        exit(0);
    }
}