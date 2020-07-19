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
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        int i = 0,j = 0,alpha[26] = {0};
        while (s[i] != '\0') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                j = s[i] - 'a';
                ++alpha[j];
            }
            ++i;
        }
        int flag = 0;
        for (i = 0; i < 26; i++){
            if(alpha[i] != 0){
                if(alpha[i] % 2 == 0){
                    flag = 1;
                }
                else{
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

