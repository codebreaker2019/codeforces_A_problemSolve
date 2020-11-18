#include<iostream>
using namespace std;
int main()
{
    int a,b,year=0;
    cin>>a>>b;
    for(int i=0;; i++)
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
    cout<<year<<endl;
    return 0 ;

}
