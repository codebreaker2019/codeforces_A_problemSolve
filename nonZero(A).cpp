//1300/A #618  div 2
#include<iostream>
#include<algorithm>
using namespace std;
int a[105];
int main()
{
    int t,n,sum=0,prod=1,step=0;
    cin >>t;
    while(t--)
    {
        sum=0;
        prod=1;
        step=0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            // cout<<a[i]<<endl;
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                a[i] = 1;
                prod *=a[i];
                sum+=a[i];
                step+=1;
            }
            else
            {
                prod *=a[i];
                sum+=a[i];
            }
        }
        if(sum>0 || sum<0)
        {
            cout<<step<<endl;
        }
        else
        {
            step+=1;
            cout<<step<<endl;
        }

    }
    return 0;
}

