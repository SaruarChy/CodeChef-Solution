#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[101];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1)
                A++;
        }
        int pos1=0,pos2=0;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                pos1=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]==1){
                pos2=i;
                break;
            }
        }

        int tag=0;
        for(int i=pos1; i<pos2; i++){
            int c=0;
            if(a[i]==1){
                for(int j=i+1; j<pos2; j++){
                    if(a[j]==0){
                        c++;
                    }
                    else if(a[j]==1)
                        break;
                }
                if(c<5){
                    tag=0;
                    break;
                }
                else if(c>=5)
                    tag=1;
            }
            if(tag==0){
                break;
            }
        }
        if(tag==1 || A==1)
            cout<<"YES"<<endl;
        else if(tag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
