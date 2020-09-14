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
    ll n,a;
    cin>>t;
    while(t--){
        set<ll>s;
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a;
            if(a > 0)
                s.insert(a);
        }
        cout<<s.size()<<endl;

    }

    return 0;
}

