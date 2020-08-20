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
    int t,n,a[101];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int c = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int A = a[i];
                int B = a[j];
                int C = A & B;
                if(C == A){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
