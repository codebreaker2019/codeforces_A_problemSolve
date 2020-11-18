//https://codeforces.com/contest/1350/problem/A

#include<iostream>
using namespace std;

void youCan(int n,int k)
{
        int get=0;
        if(n%2!=0)
            {
        for(int i=n;i>=2;i--)
        {
                if(n%i==0)
                get = i;
        }
                cout<<(n+get+2*(k-1))<<endl;
            }
    else
        cout<<(n+(2*k))<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
        cin>>n>>k;
        youCan(n,k);
    }
    return 0;
}
