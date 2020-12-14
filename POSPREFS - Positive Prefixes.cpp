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
    ll t,n,k,a[1001];
    cin>>t;
    while(t--){
        cin>>n>>k;

        if(n == k){
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
        }
        else{
            int sum = 1, div = (n/2) + (n % 2), sub = 0;
            if(n & 1){
                for(int i=1; i<=n; i++){
                    if(i % 2 == 0){
                        a[i] = i * (-1);
                    }
                    else{
                        a[i] = i;
                    }
                }
            }
            else{
                for(int i=1; i<=n; i++){
                    if(i & 1){
                        a[i] = i * (-1);
                    }
                    else{
                        a[i] = i;
                    }
                }
            }
            for(int i=1; i<=n; i++){
                sum += a[i];
                if(sum > 0){
                    if(div < k){
                        sub = k - div;
                        for(int j=n; j>0; j--){
                            if(a[j] < 0){
                                a[j] *= -1;
                                div++;
                                if(div == k)break;
                            }
                        }
                    }
                    else if(div > k){
                        sub = div - k;
                        for(int j=n; j>0; j--){
                            if(a[j] > 0){
                                a[j] *= -1;
                                div--;
                                if(div == k)break;
                            }
                        }
                    }
                }
            }
            for(int i=1; i<=n; i++){
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n";
    }

    return 0;
}

