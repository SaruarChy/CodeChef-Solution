#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,s,p,sum,i,j,ans;
    pair<int,int>prob[1005];
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>p>>s;
            prob[i]=make_pair(p,s);
        }
        for(i=1; i<9; i++)
        {
            sum=0;
            for(j=1; j<=n; j++)
            {
                if(prob[j].first==i)
                    if(sum<prob[j].second)
                        sum=prob[j].second;
            }
            ans+=sum;
        }
        cout<<ans<<endl;
    }
    return 0;
}
