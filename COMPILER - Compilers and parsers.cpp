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
        string s;
        cin>>s;
        n = s.length();
        ll ans = 0,c = 0;
        stack<char>st;
        for(ll i=0; i<n; i++){
            if(s[i] == '<'){
                st.push(s[i]);
                c++;
            }
            else{
                if(!st.empty()){
                    st.pop();
                    c++;
                }
                else{
                    break;
                }
            }
            if(st.empty()){
                ans = c;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
