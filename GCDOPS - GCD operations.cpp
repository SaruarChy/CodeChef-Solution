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
    ll t,n,b[10001];
    cin>>t;
    while(t--){
        cin>>n;
        ll g = 0,flag = 0;
        for(ll i=1; i<=n; i++){
            cin>>b[i];
        }
        for(ll i=1; i<=n; i++){
            if(i == b[i]){
                flag = 1;
            }
            else{
                g = __gcd(b[i],i);
                if(g == b[i]){
                    flag = 1;
                }
                else{
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

