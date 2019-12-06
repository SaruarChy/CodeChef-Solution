#include<iostream>
#define MAX 10000000
using namespace std;
long long int a[MAX];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=1,re=0,i;
        long long int k;
        cin>>n>>k;
        for(i=1; i<=n; i++)
            cin>>a[i];
        re=a[1]-k;
        if(a[1]<k)
        {
            cout<<"NO 1"<<endl; //no 1
        }
        else
        {
            for(i=2; i<=n; i++)
            {
                if(a[i]+re>=k)
                {
                    c=0;
                    int u=a[i]+re;
                    re=u-k;
                }
                else
                {
                    c=i;
                    break;
                }
            }
            if(c==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO "<<c<<endl;
        }
    }
    return 0;
}
