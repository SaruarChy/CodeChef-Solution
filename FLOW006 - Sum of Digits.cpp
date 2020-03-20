#include<bits/stdc++.h>
using namespace std;
long long int n;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0,remaning=0;
        cin>>n;
        while(n>0)
        {
            remaning=n%10;
            sum+=remaning;
            n=n/10;
        }
        cout<<sum<<endl;
    }

}
