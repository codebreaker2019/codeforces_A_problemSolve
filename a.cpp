#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1)
        {
            cout<<"NO"<<endl;
        }
        else if (n>99999 && m>99999)
        {
             cout<<"NO"<<endl;
        }
        else
             cout<<"YES"<<endl;
    }
    return 0;
}
