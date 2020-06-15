//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n,k,p[10005];
    cin>>t;
    while(t--)
    {
        int before = 0, after = 0, revenue = 0;
        cin>>n>>k;
        for(int i=0; i<n; i++){
            cin>>p[i];
            before +=p[i];
            if(p[i] > k){
                after += k;
            }
            else if(p[i] <= k){
                after += p[i];
            }
        }
        //cout<<before<<" "<<after<<endl;
        revenue = before - after;
        cout<<revenue<<endl;
    }

    return 0;
}


