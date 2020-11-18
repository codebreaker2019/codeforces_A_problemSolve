#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
   int n,k,s=0;
   cin>>n>>k;
   if(n==1)
   {
       cout<<0<<endl;
   }
   for(int i=0;i<n-3;i++)
   {
       s=s+2;
   }
   s=s+(k-2);
    s=s+(k-2);
    cout<<s<<endl;
}
  return 0;

}

