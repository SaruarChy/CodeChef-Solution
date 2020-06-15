//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,n;
    int a[1001][1001];
    cin>>t;
    while(t--)
    {
        int temp = 0, m = 0;
        cin>>n;
        a[0][0]=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i == 1){
                    a[i][j] = j;
                    if(j == n){
                        temp = j;
                    }
                }
                else{
                    if(temp % 2 == 1 ){
                        if(n % 2 == 0){
                            a[i][j] = temp+m;
                            m++;
                        }
                        else if(n % 2 == 1){
                            a[i][j] = temp+m;
                            m--;
                        }
                    }
                    else if(temp % 2 == 0){
                        if(n % 2 == 0){
                            a[i][j] = temp+m;
                            m--;
                        }
                        else if(n % 2 == 1){
                            a[i][j] = temp + m;
                            m++;
                        }
                    }
                    if(j == n){
                        temp = a[i][j];
                    }
                }
            }
            m = n;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
