//Codeforces Round #667 (Div. 3) ,yet another two integer
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void ja_Vai_ja_guira_ay(int t)
 {
     while (t--)
    {
          ll a,b;
           cin>>a>>b;

          //  cout<<"hi"<<endl;
          ll d=abs(a-b);
          ll result= d/10+(d%10!=0);
          cout<<result<<endl;
    }

 }
int main()
{
    int t;
    cin >> t;
    ja_Vai_ja_guira_ay(t);
    return 0;
}
