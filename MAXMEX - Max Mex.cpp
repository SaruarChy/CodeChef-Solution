//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        set<int>s;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(a[i] < m){
                s.insert(a[i]);
                ans++;
            }
            if(a[i] > m){
                ans++;
            }
        }
        if(s.size() != m-1){
            cout<<-1<<endl;
        }
        else if(s.size() == m-1){
            cout<<ans<<endl;
        }

    }

    return 0;
}
