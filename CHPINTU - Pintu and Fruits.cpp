#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    int tk[100],k;
    int f[100],p[100];
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(int i=0; i<m; i++){
            cin>>f[i];
        }
        for(int i=0; i<m; i++){
            cin>>p[i];
        }
        int pos[1005];
        fill(tk,tk+100,0);
        fill(pos,pos+1005,0);
        vector<int>v;
        for(int i=0; i<m; i++){
            if(pos[f[i]]==0){
                pos[f[i]]=1;
                v.push_back(f[i]);
            }
        }
        int s;
        s=v.size();
        k=0;
        int sum=0;
//        for(int i=0; i<s; i++)
//            cout<<v[i]<<" ";
        for(int i=0; i<s; i++){
            for(int j=i; j<m; j++){
                if(v[i]==f[j]){
                    tk[k]=tk[k]+p[j];
                }
            }
            k++;
        }
        sort(tk,tk+k);
        cout<<tk[0]<<endl;
    }
}
