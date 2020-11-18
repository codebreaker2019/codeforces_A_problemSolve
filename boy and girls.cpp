#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
   char c[105];
   cin.getline(c,105);
   int len=strlen(c);
   sort(c,c+len);
   int i=0,c_char=0;
   for(i=0;i<len;i++)
   {
       if(c[i]!=c[i+1])
        c_char++;
   }
   if(!(c_char & 1))
   cout<<"CHAT WITH HER!"<<endl;
   else
    cout<<"IGNORE HIM!"<<endl;
   return 0;
}
