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
    int t,n,k,a[1001],b[1001];
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i] = a[i];
        }
        sort(b,b+n,greater<int>());
        if(b[0] > k){
            cout<<-1<<endl;
        }
        else{
            int ans = 1,temp = 0;
            for(int i=0; i<n; i++){
                temp += a[i];
                if(temp <= k){
                    continue;
                }
                else{
                    temp = a[i];
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
