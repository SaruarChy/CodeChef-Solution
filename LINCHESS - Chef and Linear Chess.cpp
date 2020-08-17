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
    int t,n;
    ll k,a[1001];
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll div = 1000000001,temp = 10000000001;
        ll ans = -1;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(k % a[i] == 0 ){
                div = k / a[i];
                if(temp > div){
                    temp = div;
                    ans = a[i];
                }

            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
