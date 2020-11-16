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

    ll t,n,k;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>k>>s;

        ll i = 0,j = 0,power = 0,sheet = 0, c = 0;
        while(1){
            if(s[i] == 'M'){
                if(s[j] == 'I'){
                    ll pos1 = i,pos2 = j;
                    if(pos1 > pos2){
                        swap(pos1,pos2);
                    }
                    for(ll x = pos1; x<=pos2; x++){
                        if(s[x] == ':')
                            sheet++;
                    }
                    power = k + 1 - abs(i - j) - sheet;
                    sheet = 0;
                    if(power > 0){
                        c++;
                        i++,j++;
                    }
                    else{
                        if(i > j)j++;
                        else i++;
                    }
                }
                else if(s[j] == 'X'){
                    i = j;
                    i++,j++;
                }
                else
                    j++;
            }
            else if(s[i] == 'X'){
                j = i;
                i++,j++;
            }
            else
                i++;


            if(i < n && j < n)continue;
            else break;
        }
        cout<<c<<endl;
    }

    return 0;
}

