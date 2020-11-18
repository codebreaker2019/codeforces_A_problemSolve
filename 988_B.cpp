/*https://codeforces.com/problemset/problem/988/B
    substring sorted
    486 DIV-3
*/
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for(int j=0; j<n; j++)
    {
        cin>>v[j];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1].find(v[i])==string::npos)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    for (int i=0;i<n;i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
