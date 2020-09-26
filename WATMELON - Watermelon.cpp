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
    int t,n,a[15];
    cin>>t;
    while(t--){
        cin>>n;
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        if(sum < 0){
                cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
