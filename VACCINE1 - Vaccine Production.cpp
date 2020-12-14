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
    int d1,v1,d2,v2,p;
    int day = 0, vac = 0, will = 0;
    cin>>d1>>v1>>d2>>v2>>p;

    if(d1 < d2){
        day += d1-1;
        will = d2-d1;
        while(will > 0 && vac < p){
            vac += v1;
            day++;
            will--;
        }
    }
    else if(d2 <= d1){
        day += d2-1;
        will = d1 - d2;
        while(will > 0 && vac < p){
            vac += v2;
            day++;
            will--;
        }
    }
    while(vac < p){
        vac += (v1 + v2);
        day++;
    }
    cout<<day<<endl;

    return 0;
}
