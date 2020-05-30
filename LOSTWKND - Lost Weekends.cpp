//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,a[50],p,n,total;
    cin>>t;
    while(t--)
    {
        n= 5,total = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            total  +=a[i];
        }
        cin>>p;
        if(p*total <= 120){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }

    return 0;
}

