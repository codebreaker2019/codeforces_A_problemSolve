//https://codeforces.com/contest/1363/status
#include<iostream>
using namespace std;
int main()
{
     int a[1005];
     int t,n,x,o_n=0,e_n=0,s=0;
     cin>>t;
     while(t--)
     {
     o_n=0,s=0,e_n=0;
     cin>>n>>x;
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
         s+=a[i];
         if(a[i]&1)
            o_n+=1;
         else
            e_n+=1;
     }
     if(o_n==0)
        cout<<"No"<<endl;
     else if(e_n==0)
     {
         if(x%2==0)
             cout<<"No"<<endl;
         else
            cout<<"Yes"<<endl;
     }
     else if(o_n==e_n)
     {
         if(s%2==0)
            cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;

     }

     }
    return 0;
}
