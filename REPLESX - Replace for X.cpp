#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    ll t;
    ll n,x,p,k;
    cin>>t;
    while(t--){
        cin>>n>>x>>p>>k;
        ll a[n+1];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        ll m = 100000001,mp = 0;
        for(ll i=0; i<n; i++){
            if(a[i] == x){
                if(abs(p-i) < m){
                    m = abs(p-i);
                    mp = i;
                }
            }
        }
        ll idx = mp;
        ll c = 0;
        if(a[idx] != x) {
            a[k-1] = x;
            sort(a, a+n);
            c++;
        }
        if(a[p-1] == x){
            cout<<c<<endl;;
        }
        else if(p < k && a[p-1] < x) {
            cout<<-1<<endl;
        }
        else if(p > k && a[p-1] > x) {
            cout<<-1<<endl;
        }
        else{
            sort(a,a+n);
            m = 100000001;
            for(ll i=0; i<n; i++){
                if(a[i] == x){
                    if(abs(p-i) < m){
                        m = abs(p-i);
                        mp = i;
                    }
                }
            }
            idx = mp+1;
            cout<<abs(p-idx)+c<<endl;
        }

    }

    return 0;
}
