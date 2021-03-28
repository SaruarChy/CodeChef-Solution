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
        ll n,m,a;
        set<ll>s;
        cin>>n>>m;
        for(ll i=0; i<n; i++){
            cin>>a;
            s.insert(a);
        }
        if(s.size() ==  m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

