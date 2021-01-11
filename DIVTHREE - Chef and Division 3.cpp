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
    ll t,n,k,d,a[111];
    cin>>t;
    while(t--){
        ll ans = 0, rem = 0;
        cin>>n>>k>>d;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            a[i] += rem;
            if(a[i] >= k){
                ans++;
                rem = a[i] - k;
            }
            else{
                rem = a[i];
            }
        }
        ans += rem / k;
        if(ans > d){
            cout<<d<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
