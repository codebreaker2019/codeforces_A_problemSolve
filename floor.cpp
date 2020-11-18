#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,c=0,f,i=2;
   cin>>n>>x;
   while(1)
   {
    f=2+(x*i);
   if(f<n<(f+x))
   {
    c+=1;
    break;
   }
else
{
    c+=1;
    i=i+1;
}
   }
   cout<<++c<<endl;


    return 0;
}
