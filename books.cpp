#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,t,sum=0;
    int a[10005];
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int l=0,r=n-1,c=0,max1=0;
    for(int i=l; i<=r; i++)
    {
        sum+=a[i];
        if(sum<=t)
        {
            c++;
        }
        else
        {
            max1=max(max1,c);
            sum-=a[i-c];
        }
    }
    max1=max(max1,c);
    cout<<max1<<endl;
    return 0;
}
