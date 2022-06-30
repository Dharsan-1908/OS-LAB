#include<stdio.h>
#include<unistd.h>
int main(){
    execl("./hello","./hello",(char*)0);
    return 0;
    
}