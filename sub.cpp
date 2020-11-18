

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return true;
    }

    return false;
}

int main()
{
    int t;

    int n;
    cin>>n;
    vector<pair<int, string> > v;
    while(n--)
    {
        string s;
        cin>>s;
        int len=s.length();
        //v.push_back({len, s});
        v.push_back(make_pair(len, s));
    }
    sort(v.begin(), v.end());
//    for(auto i: v)
//        cout<<i.first<<" "<<i.second<<endl;
//    int j=0, f=0;
//    string pre;
//    for(auto i: v)
//    {
//        if(j==0)
//        {
//            pre=i.second;
//            j++;
//            continue;
//        }
//        if(isSubstring(pre, i.second))
//            continue;
//        else
//        {
//            f==1;
//            break;
//        }
//    }
//    if(f==0)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//    for(auto i: v)
//        cout<<i.second<<endl;
}
