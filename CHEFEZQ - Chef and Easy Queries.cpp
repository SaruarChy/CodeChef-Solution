#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,k,a;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll a[100001];
        ll rem = 0,last = 0,c = 0,i;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n; i++){
            if(a[i] < k){
                break;
            }
            else if(a[i] >= k){
                c++;
                rem = a[i] - k;
                a[i+1] += rem;
            }
        }

        if(i == n){
            last = a[n-1] - k;
            c += last/k;
        }
        cout<<c+1<<endl;
    }

    return 0;
}
