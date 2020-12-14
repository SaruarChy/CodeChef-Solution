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
    ll t,a,b;
    cin>>t;
    while(t--){
        ll evenA = 0, evenB = 0, oddA = 0, oddB = 0, ans = 0;
        cin>>a>>b;
        evenA = a/2;
        evenB = b/2;
        oddA = (a/2) + (a%2);
        oddB = (b/2) + (b%2);

        ans = (evenA * evenB) + (oddA * oddB);
        cout<<ans<<endl;
    }

    return 0;
}

