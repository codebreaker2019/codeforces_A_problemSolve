#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,t,timesOfBooks[100000];
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>timesOfBooks[i];
    }
    int sum=0,c=0,j=0;
    for(int k=0;k<n;k++)
    {
        sum = sum+timesOfBooks[k];
        if(sum<=t)
        {
        c++;
        }
        else{
            sum = sum- timesOfBooks[j];
            j++;
        }
    }
    cout<< sum << endl;
    return 0;
}
