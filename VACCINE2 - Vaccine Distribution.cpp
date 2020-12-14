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
    ll t,n,d,a[10001];
    cin>>t;
    while(t--){
        ll atRisk = 0, day = 0;
        cin>>n>>d;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(a[i] <= 9 || a[i] >= 80){
                atRisk++;
            }
        }
        day = (atRisk/d);
        if(atRisk % d != 0)day++;
        n -= atRisk;
        day += (n/d);
        if(n % d != 0)day++;

        cout<<day<<endl;
    }

    return 0;
}

