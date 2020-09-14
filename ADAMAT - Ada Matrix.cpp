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
    int t,n,a[65][65];
    cin>>t;
    while(t--){
        cin>>n;
        a[0][0]=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int c = 0,d,ok,temp;
        for(int i=n-1; i>0; i--){
            ok = a[i][i-1]+1;
            if(ok != a[i][i]){
                c++;
                d = i+1;
                for(int j=0; j<d; j++){
                    for(int k=j; k<d; k++){
                        swap(a[j][k],a[k][j]);

                    }
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
