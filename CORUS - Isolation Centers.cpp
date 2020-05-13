//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,q,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        string s;
        cin>>s;

        map<char,int>mp;
        map<char,int>visit;

        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
            visit[s[i]]=1;
        }
        vector<int>v;
        for(int i=0; i<s.length(); i++){
            if(visit[s[i]]){
                v.push_back(mp[s[i]]);
                visit[s[i]]=0;
            }
        }
        while(q--)
        {
            ans = 0;
            cin>>c;
            for(int i=0; i<v.size(); i++){
                if(c < v[i]){
                    ans= ans + (v[i] - c);
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
/*
SIMPLE INPUT
1
20 2
stayinghomesaveslife
1
3
*/
