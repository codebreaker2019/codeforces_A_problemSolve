#include<iostream>
#include<algorithm>
using namespace std;
int run(int arr[],int n)
{
    int d;
    sort(arr,arr+n);
    if(n>1)
    {
        d=arr[1]-arr[0];
    }
    for(int i=0; i<n; i++)
    {
        int dif=arr[i+1]-arr[i];
        if(d>dif)
        {
            d=dif;
        }
    }
    return d;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n_atletes;
        cin>>n_atletes;
        int a[n_atletes];
        for(int i=0; i<n_atletes; i++)
            cin>>a[i];
        int positive_dif=run(a,n_atletes);
        cout<<positive_dif<<endl;
    }
    return 0;
}
