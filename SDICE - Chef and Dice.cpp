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
    ll t, n;
    cin>>t;
    while(t--){
        ll ans = 0;
        cin>>n;
        if(n == 1)ans = 20;
        else if(n == 2)ans = 36;
        else if(n == 3)ans = 51;
        else if(n == 4)ans = 60;
        else{
            ll mod = (n % 4);
            ll div = n/4;
            if(div == 1){
                ans = (60 - (mod * 4));
                if(mod == 1)ans += 20;
                else if(mod == 2)ans +=36;
                else if(mod == 3)ans += 51;
            }
            else{
                ans = (44 * (div - 1)) + (60 - (mod * 4));
                if(mod == 1)ans += 20;
                else if(mod == 2)ans +=36;
                else if(mod == 3)ans += 51;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

