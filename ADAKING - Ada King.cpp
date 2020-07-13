//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,k;
    cin>>t;
    while(t--){
        int n = 8;
        char a[65][65];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                a[i][j] = '.';
            }
        }
        a[0][0] = 'O';
        cin>>k;
        k--;
        if(k < 8){
            for(int i=k+1; i<=k+1; i++){
                a[0][i] = 'X';
            }
            for(int i=0; i<=k+1; i++){
                a[1][i] = 'X';
            }
        }
        else if(k < 16){
            for(int i=k-7; i<n; i++){
                a[1][i] = 'X';
            }
            for(int i=0; i<k-6; i++){
                a[2][i] = 'X';
            }
        }
        else if(k < 24){
            for(int i=k-15; i<n; i++){
                a[2][i] = 'X';
            }
            for(int i=0; i<k-14; i++){
                a[3][i] = 'X';
            }
        }
        else if(k < 32){
            for(int i=k-23; i<n; i++){
                a[3][i] = 'X';
            }
            for(int i=0; i<k-22; i++){
                a[4][i] = 'X';
            }
        }
        else if(k < 40){
            for(int i=k-31; i<n; i++){
                a[4][i] = 'X';
            }
            for(int i=0; i<k-30; i++){
                a[5][i] = 'X';
            }
        }
        else if(k < 48){
            for(int i=k-39; i<n; i++){
                a[5][i] = 'X';
            }
            for(int i=0; i<k-38; i++){
                a[6][i] = 'X';
            }
        }
        else if(k < 56){
            for(int i=k-47; i<n; i++){
                a[6][i] = 'X';
            }
            for(int i=0; i<k-46; i++){
                a[7][i] = 'X';
            }
        }
        else if(k < 64){
            for(int i=k-55; i<n; i++){
                a[7][i] = 'X';
            }
            for(int i=0; i<k-54; i++){
                a[8][i] = 'X';
            }
        }
        else{
            a[0][0] = '.';
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
