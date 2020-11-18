#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long long  n,k,pip=0;
    cin>>n;
    cin>>k;
    if(n==1)
       {
           cout<<pip<<endl;
       }
    else if(n==2)
        {
            cout<<k<<endl;
            }
    else if(n==k)
    {
         cout<<k+k<<endl;
    }
}
  return 0;

}
