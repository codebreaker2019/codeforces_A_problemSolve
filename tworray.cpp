#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[40], b[40];
        int n, k;
        cin>>n>>k;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];

        }
        sort(a, a+n);
        sort(b, b+n);
        5 3
        5 5 5 6 6
        1 2 3 4 5
        for(int i=0, j=n-1, m=k; m>=1&&  i<n; i++, j--)
            if(b[j]>a[i])
            {
                a[i]=b[j];
                m--;

            }
        int sum=0;
        for(int i=0; i<n; i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
}

