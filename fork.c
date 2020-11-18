#include<stdio.h>
#include<unistd.h>
child()
{
    printf("i am child and my id is %d\n",getpid());
}
parent()
{
    printf("i am parent process being id %d\n",getppid());
}
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
       child();
    }
    else
    {
        parent();

    }
    return 0;
}
