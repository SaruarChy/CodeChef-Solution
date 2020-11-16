#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t,n,a[100001];
    ll m = 4000001;
    bool prime[m+1];
    memset(prime, true, sizeof(prime));
    for(ll p=2; p*p<=m; p++){
        if(prime[p] == true){
            for(ll i=p*p; i<m; i += p)
                prime[i] = false;
        }
    }
    vector<ll>v;
    for(ll i=2; i<m; i++){
       if(prime[i]){
            v.pb(i);
       }
    }
    cin>>t;
    while(t--){
        cin>>n;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<ll>b;
        for(ll i=0; i<n; i++){
            b.pb(v[a[i]]);
            mp[a[i]]--;
        }

        for(ll i=0; i<n; i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

