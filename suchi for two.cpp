//https://codeforces.com/problemset/problem/1138/A
#include<iostream>
//1112222111112221112222
abr boli:
1. consecutive 1 or 2 gula c count koira ekta array te rakho
2. tarpor consecutive pair gula theika minimum count koira best update koro, best=max(best, min);
3. best print koro.
buccho?
wait //1122211 dhoro eta sequence now one variable count korlm 2 holo then, ami jni na, tmi
ekhn tmi boltaso code er kotha, jdi code koirai dite hoe taile ki lav, nije nije matha khtaw
accha
age ekta code dar koraw, output anar try koro however , ami asi hmmm
121212121212
232612738452-vector
best= 2
using namespace std;
int main()
{
    int m,n,t,a[100005],l=0,h,two=0,one=0;
    cin>>n;
    h=n-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=l;i<h;i++)
    {
        m=(l+h)/2;

            for(int i=0; i<m; i++)
            {
                if(a[i]==2)
                {
                    two=two+1;
                    if(a[i+1]==1)
                    {
                        one=one+1;
                    }

                }
                else
                {
                    one+=1;
                    if(a[i+1]==2)
                        two = two +1;
                }
            }
            cout<<one<<" "<<two<<endl;

    }
    return 0;
}
