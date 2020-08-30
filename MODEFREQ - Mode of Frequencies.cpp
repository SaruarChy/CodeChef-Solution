//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,A;
    cin>>t;
    while(t--){
        cin>>n;
        map<ll,ll>mp,m;
        for(ll i=0; i<n; i++){
            cin>>A;
            mp[A]++;
        }
        for(ll i=0; i<10001; i++){
            m[mp[i]]++;
        }
        map<ll,ll>:: iterator it;
        int x,y,ans = 0,ans1 = 0;
        for (it = m.begin(); it != m.end(); it++) {
            x = it->first;
            y = it->second;
            if(x > ans && y > ans1){
                ans = x;
                ans1 = y;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}

