#include<bits/stdc++.h>
using namespace std;
long long int a[1000001];
int main()
{
    long long int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;

    return 0;
}
