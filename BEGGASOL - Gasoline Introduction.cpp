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
    ll t,n,a[101];
    cin>>t;
    while(t--){
        int dis = 0,fuel = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            fuel += a[i];
            if(fuel > 0){
                dis++;
                fuel--;
            }
            else{
                break;
            }
        }
        dis += fuel;
        cout<<dis<<endl;
    }

    return 0;
}

