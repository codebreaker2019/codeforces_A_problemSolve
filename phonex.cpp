//https://codeforces.com/contest/1348/problem/A
//div 2 problem name(Phoenix and Balance)
//today i learn about #include<cstdlib> and left shift and abs() !
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s1,s2,d;
        s1=0,s2=0;
        cin>>n;
        s1+=1<<n;
        // cout<<"print first result "<<s1<<endl;
        for(int i=1; i<=n/2-1; i++)
        {
            s1+=(1<<i);
            // cout<<"print "<<s1<<endl;
        }
        // cout<<"break nao baby: "<<endl;
        for(int i=n/2; i<n; i++)
        {
            s2+=(1<<i);
            // cout<<"print "<<s2<<endl;
        }
        d=s1-s2;
        cout<<abs(d)<<endl;
    }
    return 0;
}
