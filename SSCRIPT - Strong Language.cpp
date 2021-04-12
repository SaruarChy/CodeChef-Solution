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
    ll t, n, k;
    cin>>t;
    while(t--){
        ll star = 0, c = 0;
        string s;
        cin>>n>>k>>s;
        for(ll i=0; i<n; i++){
            if(s[i] == '*'){
                c++;
            }
            else{
                star = max(star, c), c = 0;
            }
        }
        star = max(star, c), c = 0;
        star >= k ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}
