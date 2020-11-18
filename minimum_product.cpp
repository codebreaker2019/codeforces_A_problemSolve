//Codeforces Round #667 (Div. 3),//B, Minimum product
//Codeforces Round #667 (Div. 3) ,yet another two integer
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void ja_Vai_ja_guira_ay(int t)
 {
     while (t--)
    {
          ll a,b,x,y,n,f_res;
          cin>>a>>b>>x>>y>>n;
          if(a>b)
          {
             ll d = a-x;
             ll steps = abs(d-n);
             for(ll i=0;i<=steps;i++)
             {
                 a=a-1;
                 f_res = (a) * b;

cout<<"dek tho vai ki somossa"<<f_res<<endl;
             }
             cout<<f_res<<endl;
          }
          else
          {
             ll d = b-y;
             ll steps = abs(d-n);
             for(ll i=0;i<=steps;i++)
             {
                 b=b-1;
                 f_res = a*b;
cout<<"dek tho vai ki somossa"<<f_res<<endl;
             }
             cout<<f_res<<endl;
          }
    }

 }
int main()
{
    int t;
    cin >> t;
    ja_Vai_ja_guira_ay(t);
    return 0;
}

