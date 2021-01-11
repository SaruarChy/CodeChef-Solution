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
    ll t,n,k,h[4001];
    cin>>t;
    while(t--){
        ll boxes = -1, sum = 0, x = 0;
        cin>>n>>k;
        for(ll i=0; i<n; i++){
            cin>>h[i];
        }
        set<ll>mike;
        sort(h,h+n);

        mike.insert(h[n-1]), sum = h[n-1];
        for(ll i=n-2; i>= 0; i--){
            set<ll>tracy;
            set<ll>:: iterator itr;
            sum += h[i];
            for(itr = mike.begin(); itr!=mike.end(); itr++){
                x = *itr;
                tracy.insert(x);
                tracy.insert(h[i]);
                tracy.insert(x+h[i]);
                if((x + h[i] >= k) && (sum - x - h[i] >= k)){
                    boxes = n - i;
                }
                if((h[i] >= k) && (sum - h[i] >= k)){
                    boxes = n - i;
                }
            }
            if(boxes != -1){
                break;
            }
            mike = tracy;
        }

        cout<<boxes<<endl;

    }
    return 0;
}
