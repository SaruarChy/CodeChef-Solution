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
    int t;
    ll s,n;
    cin>>t;
    while(t--){
        cin>>s>>n;
        if(s % n == 0){
            cout<<s/n<<endl;
            continue;
        }
        ll ans = 0;
        if(s % 2 == 1)s--,ans++;
        if(s % n == 0){
            cout<<(s/n)+1<<endl;
            continue;
        }
        if(n > s){
            n = s;
        }
        ans += s/n;
        s %= n;
        n -= 2;
        while(s > 0){
            ans += s/n;
            s %= n;
            n -=2;
            if(s < n){
                n = s;
            }
            if(s <= 1)break;
        }
        if(s == 1)ans++;
        cout<<ans<<endl;
    }

    return 0;
}
