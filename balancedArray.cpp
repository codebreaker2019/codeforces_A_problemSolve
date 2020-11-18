#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       int even_sum=0,odd_sum=0;
        cin >> n;
        if(n%4==0)
        {
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i=i+2)
            {
                cout<<i<<" ";
                even_sum+=i;
                // cout<< "each even_sum is :"<<even_sum<<endl;
            }
            // cout<<endl;
            //cout<<"even sum is "<<even_sum<<endl;
            for(int i=1; i<=n-2; i=i+2)
            {
                cout<<i<<" ";
                if(odd_sum!=even_sum)
                {
                    odd_sum+=i;
                }
            }
            // cout<<endl;
            // cout << "odd sum is :" <<odd_sum<<endl;
            int last_value = even_sum - odd_sum ;
            cout << last_value <<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
