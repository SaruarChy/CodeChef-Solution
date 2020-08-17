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
    ll t,h,p;
    cin>>t;
    while(t--){
        cin>>h>>p;
        while(h > 0 && p > 0){
            if(h < p){
                h = 0;
            }
            else{
                h -= p;
            }
            p /= 2;
        }
        if(h == 0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
