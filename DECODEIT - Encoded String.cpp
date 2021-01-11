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
        string letter[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"};

        string s,ans,binary;


        cin>>n>>s;
        for(ll i=0; i<n; i+=4){
            string binary;
            for(ll j=i; j<i+4; j++){
                binary += s[j];
            }

            int Binary = 0, decimal = 0,rem = 0,k = 0;
            Binary = stoi(binary);
            while(Binary != 0){
                rem = Binary % 10;
                Binary /= 10;
                decimal += rem * pow(2,k);
                k++;
            }
            ans += letter[decimal];
        }
        cout<<ans<<endl;
    }
    return 0;
}
