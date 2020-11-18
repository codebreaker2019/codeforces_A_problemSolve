#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
  cin>>s;
    for(int i=0;s[i]!='\0'; i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')

{
    continue;

}
        else if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
        {
           cout<<".";
    cout<<s[i];
        }
          // i++;
    }
    return 0;
}
