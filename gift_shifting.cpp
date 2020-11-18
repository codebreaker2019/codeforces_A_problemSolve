#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n],min_a=INT_MAX,min_b=INT_MAX;
        for(int mridu=0; mridu<n; mridu++)
        {
            cin>>a[mridu];
            min_a=min(min_a,a[mridu]);
        }
        for(int mridu=0; mridu<n; mridu++)
        {
            cin>>b[mridu];
            min_b=min(min_b,b[mridu]);
        }
        ll sum=0;
        for(int i = 0; i<n; i++)
        {
            sum+=max(a[i]-min_a,b[i]-min_b);
        }
        cout<<sum<<endl;
    }
        return 0;

}
