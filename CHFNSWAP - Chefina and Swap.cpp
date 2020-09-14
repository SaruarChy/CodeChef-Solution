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
    while(t--){
        ll sum = 0,sub = 0,m = 0,r = 0;
        cin>>n;
        sum = (n * (n+1))/2;
        if(sum % 2 == 1){
            cout<<0<<endl;
        }
        else{
            long double ans;
            ans = sqrtl(1ul+4 *(sum));
            ans = ans - 1.0,ans = ans / 2.0;
            //cout<<"ans after - 1.0 "<<ans<<endl;
            //cout<<"ans after / 2.0 "<<ans<<endl;
            m = ans;
            sub = (m * (m+1))/2;
            //cout<<"sub "<<sub<<endl;
            if(sum/2 == sub){
                r = (m*(m-1ul))/2l+((n-m)*(n-m-1ul))/2l+(n-m);
                cout<<r<<endl;
            }
            else{
                cout<<n-m<<endl;
            }
        }
    }

    return 0;
}

