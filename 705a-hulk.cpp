//https://codeforces.com/contest/705/problem/A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        if(i & 1)
            cout<<"I hate that ";
        else
            cout<<"I love that ";
    }
    if(n%2==1)
        cout<<"I hate it"<<endl;
    if (n%2==0)
        cout<<"I love it"<<endl;
    return 0;
}
