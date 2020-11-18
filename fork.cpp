#include<stdio.h>
#include<unistd.h>

int main()
{
    int p;
    p=fork();
    if(p<0)
    {
        printf("can not be executed");
    }
    else if(p==0)
    {
        printf("i am child and my id is %d\n",getpid());
    }
    else if(p>0)
    {
        printf("i am parent process being id %d\n",getppid());
    }
}
