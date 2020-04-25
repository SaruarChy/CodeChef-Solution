#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,price[101],player[101],s;
    cin>>t;
    while(t--)
    {
        int total=0;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            cin>>price[i];
        }
        for(int i=0; i<n; i++){
            cin>>player[i];
        }
        int defender=101,forwarder=101;
        for(int i=0; i<n; i++){
            if(player[i]==0){
                defender=min(defender,price[i]);
            }
            if(player[i]==1){
                forwarder=min(forwarder,price[i]);
            }
        }
        total=s+defender+forwarder;
        if(total<=100){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
}
/*
SIMPLE INPUT
2
4 90
3 8 6 5
0 1 1 0
4 90
5 7 6 5
0 1 1 0
*/
