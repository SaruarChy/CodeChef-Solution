#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,x,y,k;

    cin>>t;
    while(t--){
        cin>>n>>k>>x>>y;

        int first = x,flag = 0;
        if(x == y){
            cout<<"YES"<<endl;
            continue;
        }
        x = (x + k) % n;
        while(x != first){
            if(y == x){
                flag = 1;
                break;
            }
            else{
                x = (x + k) % n;
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
