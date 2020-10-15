#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main ()
{
    int id = fork();
    if(id==0){
        sleep(1);
    }
    {
    printf("PID:%d, PPID:%d\n", getpid(), getppid());

    int res = wait(NULL);
    if (res == -1) {
        printf("No children to wait for\n");
    }
        else {
        printf("%d finished execution\n", res);    
        }
    }
    return 0;
}