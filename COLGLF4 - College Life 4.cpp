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
    ll t;
    cin>>t;
    while(t--){
        ll n,e,h,a,b,c;
        ll idx1 = 0,idx2 = 0;
        cin>>n>>e>>h>>a>>b>>c;
        vector<ll>ans;
        vector<ll>idx;
        for(ll i=0; i<=n; i++){
            idx.pb(i);
        }
        ll omlet = 0, milkshake = 0, cake = 0;
        for(milkshake=0; milkshake <= n; milkshake++){
            idx1 = lower_bound(idx.begin(),idx.end(),(2 * n - e - 2 * milkshake))-idx.begin();
            idx2 = upper_bound(idx.begin(),idx.end(), (h - 3 * milkshake))-idx.begin()-1;
            if(idx2 < idx1 || idx1 == n+1){
                continue;
            }
            if(idx2 == n+1 && ( (idx2 + 3 * milkshake) > h)){
                continue;
            }
            if(c>a){
                cake = (idx1 < (n-milkshake) ? idx1 : (n - milkshake));
            }
            else{
                cake = (idx2 < (n - milkshake) ? idx2 : (n - milkshake));
            }
            omlet = n-cake-milkshake;
            if((cake + 2 * milkshake) >= (2 * n - e) && (cake + 3 * milkshake) <= h){
                ans.pb( (a * omlet) + (b * milkshake) + (c * cake) );
            }

        }
        if(ans.size() == 0){
            cout<<"-1"<<endl;
        }
        else{
            sort(ans.begin(),ans.end());
            cout<<ans[0]<<endl;
        }

    }
    return 0;
}
