#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

bool ok(ll n){
    if(n == 0){
        return false;
    }
    return(ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    fastread();
    ll t,n;
    ll arr[100001];
    cin>>t;
    while(t--){
        int flag = 0;
        cin>>n;
        if(n == 1){
            cout<<1<<endl;
        }
        else if(ok(n)){
            cout<<-1<<endl;
        }
        else{
            for(ll i=1; i<=n; i++){
                arr[i] = i;
            }
            arr[1] = 2,arr[2] = 3,arr[3] = 1;
            for(ll j=4; j<=n; j++){
                if(ok(j)){
                    swap(arr[j],arr[j+1]);
                    j++;
                }
            }
            flag = 1;
        }
        if(flag == 1){
            for(ll i=1; i<=n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
