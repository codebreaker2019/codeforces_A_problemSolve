#include<iostream.h>
using namespace std;
int main()
{
    int a,b,year=0;
    scanf("%d%d",&a,&b);
    for(int i=0;;i++)
    {
        if(a<=b)
        {
            a*=3;
            b*=2;
            year++;
        }
        else
        {
            break;
        }
    }
    printf("year...%d",year);
    return 0 ;

}
