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
    ll t;
    cin>>t;
    while(t--){
        float k1, k2, k3, v, velocity = 0.0, times = 0.0, chef = 0.0, bolt = 9.58 ;
        cin>>k1>>k2>>k3>>v;
        velocity = k1 * k2 * k3 * v;
        times = 100 / velocity;
        float value = (int)(times * 100 + 0.5 );
        chef = (float)value / 100;
        chef < bolt ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}
