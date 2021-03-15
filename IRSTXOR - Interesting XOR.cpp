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
    ll t,n;
    cin>>t;
    while(t--){
        ll m, one = 0,len = 0;
        cin>>n;
        m = n;
        while(m > 0){
            m /= 2;
            one++;
        }
        ll num1 = 0, num2 = 0;
        num1 = pow(2, one-1) - 1;
        num2 = num1 ^ n;

        cout<<num1*num2<<endl;
    }
    return 0;
}
