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
    ll t,s,r;
    cin>>t;
    while(t--){
        cin>>s>>r;
        if(r < 10){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        ll i = 9,chef = 0,Chef = 0;
        while(Chef < s){
            chef = s / i;
            Chef = chef * i;
            if( Chef < s){
                chef++;
                Chef = chef * i;
            }
            if( Chef >= s)break;
        }
        ll rick = 0, Rick = 0;
        i = 9;
        while(Rick < r){
            rick = r / i;
            Rick = rick * i;
            if( Rick < r){
                rick++;
                Rick = rick * i;
            }
            if( Rick >= r )break;
        }
        if(chef < rick){
            cout<<0<<" "<<chef<<endl;
        }
        else if(rick <= chef){
            cout<<1<<" "<<rick<<endl;
        }
    }

    return 0;
}
