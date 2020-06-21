//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,m,b,a[5001];
    cin>>t;
    while(t--)
    {
        cin>>n>>b>>m;
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        int prev = -1, current = 0, ans = 0;
        for(int i=0; i<m; i++){
            current = a[i]/b;
            if(current == prev)
                continue;
            else{
                prev = a[i] / b;
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
