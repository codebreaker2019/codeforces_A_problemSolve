#include<bits/stdc++.h>
using namespace std;
//int a[100000];
//int one=0;
//int two=0;
//int on=true;
//int tw=true;
//int j=0;
//int sz=0;
////11111222211122
//int main()
//{
//    int n, in;
//    cin>>n;
//    int p=0, q=0;
//    for(int i=0; i<n; i++)
//    {
//        cin>>in;
//        if(in==1)
//        {
//            //first input handle korar jonno
//            if(i==0)
//            {
//                one++;
//                p++;
//                continue;
//            }
//            if(p==i)
//            {
//                one++;
//                p++;11111222
//                continue;
//            }
//            if(on==true)
//            {
//                a[j]=two;
//                two=0;
//                on=false;
//                tw=true;
//                j++;
//                sz++;
//            }
//
//            one++;
//        }
//        else
//        {
//            if(i==0)
//            {
//                two++;
//                q++;
//                continue;
//            }
//            if(q==i)
//            {
//                two++;;
//                q++;
//                continue;
//            }
//            if(tw==true)
//            {
//                a[j]=one;
//                one=0;
//                tw=false;
//                on=true;
//                j++;
//                sz++;
//            }
//            two++;
//        }
//    }
//    if(on==true)
//    {
//        a[j]=two;
//        two=0;
//        on=false;
//        tw=true;
//        j++;
//        sz++;
//    }
//    if(tw==true)
//    {
//        a[j]=one;
//        one=0;
//        tw=false;
//        on=true;
//        j++;
//        sz++;
//    }
//
//
//    int best=-999;
//    for(int i=1; i<sz; i++)
//        best=max(best,min(a[i-1], a[i]));
//    cout<<best*2<<endl;
//}
// ekta por por index dia kaj korba 012345
//137967

int main()
{
    int n, in;
    cin>>n;
    int sum1=0, sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        if(i & 1)
        {
            sum1+=in;
        }
        else
        {
            sum2+=in;
        }
    }
}
