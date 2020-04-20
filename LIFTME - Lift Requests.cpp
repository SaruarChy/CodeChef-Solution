#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
long long int d[111111],u[111111];
int main()
{
    fastread();

    int t;
    long long int n,q,sum,i;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>q;
        for(i=0; i<q; i++){
            cin>>d[i]>>u[i];
        }
        for(i=0; i<q; i++){
            if(i==0){
                sum=(d[0] + abs(d[0] - u[0]));
                continue;
            }
            sum+=abs(u[i-1]-d[i]);
            sum+=abs(u[i]-d[i]);

        }
        cout<<sum<<"\n";
    }
    return 0;
}
/*
SIMPLE INPUT
1
2 3
1 2
0 1
1 0
*/
