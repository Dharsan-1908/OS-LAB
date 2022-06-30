#include<stdio.h>>
#include<unistd.h>
int main(){
    int pid;
    pid = fork();
    if(pid==0){
        printf("child process running hello world program\n");
        execl("./hello","./hello",(char*)0);
    }
    else{
        sleep(3);
        printf("parent process running while loop program");
        execl("./loop","./loop",(char*)0);
    }
    return 0;
}