    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            int a[n];
            for(int i=0;i<n;++i)
                cin>>a[i];
            sort(a,a+n);
            cout<<a[0]+a[1]<<"\n";

        }
        return 0;
    }