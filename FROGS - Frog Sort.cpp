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
    cin>>t;
    while(t--){
        int w[100], l[100];
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>w[i];
        for(int i=0; i<n; i++)
            cin>>l[i];
        map<int,pair<int,int> >arry;
        map<int,pair<int,int> >:: iterator itr;
        for(int i=0; i<n; i++)
            arry[w[i]] = {l[i],i};
        int ans = 0,curr = 0, length = 0;
        for(itr=arry.begin(); itr!= arry.end(); itr++){
            if(itr==arry.begin()){
                curr = (itr->second).second;
            }
            else{
                length = (itr->second).second;
                while(curr >= length){
                    ans++;
                    length += (itr->second).first;
                }
                curr = length;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

