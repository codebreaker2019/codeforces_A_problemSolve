#include<bits/stdc++.h>
using namespace std;
void round_round(int n)
{
    stringstream ss;
    ss<< n;
    string str=ss.str();
    //cout<<str.length()<<endl;
    int len=str.length();
    int zero=0;
    int c=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]-'0'!=0)
            c++;
    }
    cout<<c<<endl;
    for(int i=str.length()-1; i>=0; i--)
    {
        if(str[i]-'0'!=0)
        {
            cout<<str[i];
            for(int j=0;j<zero;j++)
                cout<<0;
            cout<<" ";
        }
        zero++;
    }
    cout<<endl;
}
int main()
{
    int t;
    for(cin>>t; t; t--)
    {
        int n;
        cin>>n;
        round_round(n);
    }
}

