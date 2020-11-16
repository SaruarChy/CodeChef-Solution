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
    int a[5];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(n == 1){
            cout<<a[0]<<endl;
        }
        else if(n == 2){
            cout<<max(a[0],a[1])<<endl;
        }
        else if(n == 3){
            int ans1 = a[0] + a[1];
            cout<<max(ans1,a[2])<<endl;
        }
        else if(n == 4){
            int ans1 = max((a[0] + a[1] + a[2]),a[3]);
            int ans2 = max((a[0] + a[3]), (a[1] + a[2]));
            int ans3 = max((a[0] + a[3]), (a[2] + a[1]));
            int ans4 = max((a[0] + a[2]), (a[3] + a[1]));
            cout<<min(ans1,min(ans2,min(ans3,ans4)))<<endl;
        }
    }

    return 0;
}

