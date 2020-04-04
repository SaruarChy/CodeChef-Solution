#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9+7;
int main()
{
    int t;
    long long int  n,a[100005],i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        long long int sum=0,c=0;
        sort(a,a+n,greater<long long int>());
        for(i=0; i<n; i++){
            if(a[i]>0){
                if(a[i]<=c)
                    c=a[i];
                else
                    c=i;
                sum+=a[i]-c;
                //c++;
            }
        }
        cout<<sum%MAX<<endl;
    }
}
