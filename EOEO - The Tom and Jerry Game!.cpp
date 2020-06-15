//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t;
    cin>>t;
    while(t--)
    {
        ull n;
        cin>>n;
        if(n % 2 == 1){
            cout<<n/2<<endl;
        }
        if(n % 2 == 0){
            while(n % 2 != 1){
                n /= 2;
            }
            if(n % 2 == 1){
                cout<<n/2<<endl;
            }
            else if(n % 2 == 0){
                cout<<0<<endl;
            }
        }

    }

    return 0;
}
