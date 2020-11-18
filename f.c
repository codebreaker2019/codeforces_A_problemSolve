// example.c
#include <stdio.h>
void main()
{
    int val;
    val = fork();   // line A
    printf("%d", val);  // line B
}
