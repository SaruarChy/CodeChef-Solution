#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t,n,k,x,y;
    cin>>t;
    while(t--){
        ll m = 0;
        cin>>n>>k>>x>>y;

        if(x == y){
            cout<<n<<" "<<n<<endl;
        }
        else{
            if(k % 4 == 3){
                if(x < y){
                    x = y - x;
                    y = 0;
                }
                else{
                    y = x - y;
                    x = 0;
                }
            }
            else if(k % 4 == 2){
                if(x > y){
                    x = n - x + y;
                    y = n;
                }
                else{
                    y = n - y + x;
                    x = n;
                }
            }
            else if(k % 4 == 1){
                m = max(x,y);
                x += (n - m);
                y += (n - m);
            }
            else{
                if (x == 0 || y == 0){

                }
                else{
                    if(x < y){
                        y = y - x;
                        x = 0;
                    }
                    else{
                        x = x - y;
                        y = 0;
                    }
                }
            }
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
