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
    ll t,n,in;
    cin>>t;
    while(t--){
        ll c = 1, dif = 0;
        cin>>n;
        ll a[n+5];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(ll i=0; i<n; i++){
            if(a[i] <= c) dif += c - a[i];
            else{
                dif = 0;
                break;
            }
            c++;

        }
        if(dif & 1){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
