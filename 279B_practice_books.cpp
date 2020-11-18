#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int a[1005];
int main()
{
    long int n,t,sum=0,c=0;
    cout<<"enter two value :"<<endl;
    cin>>n>>t;
    vector<long int>mri;
    for(int i=0;i<n;i++)
    {
      cout <<"taking the values in array :"<<endl;
      cin>>a[i];
    }
    for(long int i=0;i<n;i++)
    {
    for(long int j=i;j<n;j++)
    {
       if(a[j]+sum<=t)
       {
           sum+=a[j];
           c++;
       }
    }
    mri.push_back(c);
    }
    sort(mri.begin(),mri.end());
    cout<<"allah print the value of maximum :"<<mri.front()<<endl;

    return 0 ;
}
