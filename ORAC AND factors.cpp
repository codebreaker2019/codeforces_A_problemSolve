#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if (n % 2 == 0)
        return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }

    return n;
}
void fun_two(int m, int k)
{
    cout<<m+(k*2)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int m=n;
        int m_v=n;
        for(int i=1;i<=k;i++)
        {
            m_v=m;
            m=fun(m_v);
            m+=m_v;
            if(m%2==0)
            {
                fun_two(m, k-i);
                break;
            }
        }

    }

    return 0;
}

