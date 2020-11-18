#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            int value;
            cin>>value;
            s.insert(value);
        }
        auto pos=s.begin();
        int first= *pos;
        int f=1;
        for(int i: s)
        {
            if(first==i)
                continue;
            else
            {
                int dif=abs(first-i);
                if(dif<=1)
                {
                    first=i;
                    continue;
                }
                else
                {
                    f=0;
                    break;
                }
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

