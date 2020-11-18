#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int a[100];
    int c=0;
    cin>>s;
    int l=s.length();
//cout<<l<<endl;
    cout<<s[l-1]<<endl;
    for(int i=l-1;i>0;i--)
    {
      cout << s[i]<<endl;
       if(s[i]==0)
       {
           c+=1;
       }
       else
       {
           cout<<s[i]<<c<<endl;
       }
        //cout<<s[i]<<" "<<endl;
    }
    return 0;
}
