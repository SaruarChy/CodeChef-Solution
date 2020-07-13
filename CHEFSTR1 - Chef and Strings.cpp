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
    int t,n,a[100001];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(int i=1; i<n; i++){
            if(a[i] > a[i-1] || a[i] < a[i-1]){
                ans += abs(a[i] - a[i-1]);
                ans--;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

