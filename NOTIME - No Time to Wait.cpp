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
    ll n, h, x, time[105];
    cin>>n>>h>>x;
    for(ll i=0; i<n; i++){
        cin>>time[i];
    }
    sort(time,time+n,greater<ll>());
    if(x+time[0] >= h){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

