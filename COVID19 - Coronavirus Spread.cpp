//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100];
    cin>>t;
    while(t--)
    {
        int Min=0,Max=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n == 2){
            if( a[1] - a[0] <= 2){
                cout<<2<<" "<<2<<endl;
            }
            else{
                cout<<1<<" "<<1<<endl;
            }
            continue;
        }
        int ans[100];
        fill(ans,ans+100,1);
        int k=0;
        for(int i=1; i<n; i++){
            if(a[i]-a[i-1] <= 2){
                ans[k]+=1;
            }
            else{
                k++;
            }
        }
        vector<int>v;

        for(int i=0; i<=k; i++){
            v.push_back(ans[i]);
        }
        int Size = v.size();
        sort(v.begin(),v.end());

        Min = v[0],Max = v[Size-1];
        cout<<Min<<" "<<Max<<endl;
    }
    return 0;
}
