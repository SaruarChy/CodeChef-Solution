//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int getChef(ll n)
 {
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10);

    return sum;
 }
 int getMorty(ll n)
 {
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10);

    return sum;
 }
int main()
{
    fastread();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int chef = 0,c,morty = 0,m;
        while(n--){
            ll a,b;
            cin>>a>>b;
            c = m = 0;
            c = getChef(a);
            m = getMorty(b);

            if(c > m)chef++;
            else if(c < m)morty++;
            else if(c == m){
                chef++;
                morty++;
            }
        }

        if(chef == morty)cout<<2<<" "<<chef<<endl;
        else if(chef > morty)cout<<0<<" "<<chef<<endl;
        if(chef < morty)cout<<1<<" "<<morty<<endl;


    }

    return 0;
}
