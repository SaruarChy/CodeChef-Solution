//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n = s.length();
        ll x = 0;
        for(ll i=0; i<n; i++){
            if(s[i] == 'x' && s[i+1] == 'y'){
                x++;
                i++;
            }
            else if(s[i] == 'y' && s[i+1] == 'x'){
                x++;
                i++;
            }
            else{
                continue;
            }
        }
        cout<<x<<endl;

    }

    return 0;
}
