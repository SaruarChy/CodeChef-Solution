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
    cin>>t;
    while(t--){
        ll ans = 0;
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());
        ans = abs(a[0] - a[1]) + abs(a[1] - a[n-1]) + abs(a[n-1] - a[0]);
        cout<<ans<<endl;
    }
    return 0;
}

