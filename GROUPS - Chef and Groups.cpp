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
        ll n,groups = 0;
        string s;
        cin>>s;
        n = s.length();
        for(ll i=0; i<n; i++){
            if(s[i] == '1' && (s[i-1] == '0' || i-1 < 0) )groups++;
        }
        cout<<groups<<endl;
    }
    return 0;
}

