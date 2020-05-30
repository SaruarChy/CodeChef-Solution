//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int t;
    ll n, a[100005],b[100005];
    cin>>t;
    while(t--)
    {
        ll i, sum = 0;

        cin>>n;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n; i++){
            cin>>b[i];
        }
        vector<ll>v;
        ll asum = 0,bsum = 0;
        for(i=0; i<n; i++){
            if( (a[i] == b[i]) && (asum == bsum) ){
                v.push_back(a[i]);
                asum +=a[i];
                bsum +=b[i];
            }
            else{
                asum +=a[i];
                bsum +=b[i];
            }
        }
        ll s=v.size();
        for(i=0; i<s; i++){
            sum +=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
