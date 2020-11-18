#include<bits/stdc++.h>
using namespace std;
int po[20];
void pre()
{
    for(int i=0;i<6;i++)
        po[i]=1<<(i+1);
}
int main()
{
    pre();
    for(int i=0;i<6;i++)
        cout<<po[i]<<endl;
    //2 4 8 16 32
    //printf("%d", 1<<);
}
