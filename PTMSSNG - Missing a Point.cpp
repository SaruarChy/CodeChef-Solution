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
    int t;
    ll n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n = 4*n - 1;
        vector<ll>x(n);
        vector<ll>y(n);
        for(ll i=0; i<n; i++){
            cin>>x[i]>>y[i];
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        ll p1 = 0,p2 = 0;
        for(ll i=0; i<n; i++){
            if(x[i] == x[i+1]){
                i++;
            }
            else if(x[i] != x[i+1]){
                p1 = x[i];
                break;
            }
        }
        for(ll i=0; i<n; i++){
            if(y[i] == y[i+1]){
                i++;
            }
            else if(y[i] != y[i+1]){
                p2 = y[i];
                break;
            }
        }
        cout<<p1<<" "<<p2<<endl;
    }

    return 0;
}

