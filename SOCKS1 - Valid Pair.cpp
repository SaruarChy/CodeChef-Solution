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
    ll a, b, c;
    set<ll>s;
    cin>>a>>b>>c;
    s.insert(a), s.insert(b), s.insert(c);
    ll len = s.size();
    (len <= 2) ? cout<<"YES\n" : cout<<"NO\n";

    return 0;
}

