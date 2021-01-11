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
    ll t,n,m,a[1001],b[1001];
    cin>>t;
    while(t--){
        ll sumA = 0, sumB = 0;
        cin>>n>>m;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            sumA += a[i];
        }
        for(ll i=0; i<m; i++){
            cin>>b[i];
            sumB += b[i];
        }

        if(sumA > sumB){
            cout<<0<<endl;
        }
        else{
            sort(a,a+n);
            sort(b,b+m,greater<ll>());

            ll c = 0, i = 0, j = 0, tempA, tempB;
            while(i < n && j < m){
                sumA -= a[i], sumB -= b[j];
                tempA = a[i], tempB = b[j];
                a[i] = tempB;
                b[j] = tempA;
                sumA += a[i];
                sumB += b[j];
                c++;
                i++,j++;
                if(sumA > sumB)
                    break;
            }
            if(sumA > sumB){
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }

        }

    }
    return 0;
}

