//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int five = 0, ten = 0, need = 0,flag = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 5){
                five++;
                flag = 1;
            }
            else{
                need = a[i] - 5;
                if(need == 5){
                    if(five > 0){
                        five--;
                        ten++;
                        flag = 1;
                    }
                    else{
                        flag = 0;
                        break;
                    }
                }
                else if(need == 10){
                    if(ten > 0){
                        ten--;
                        flag = 1;
                    }
                    else if(five > 1){
                        five -= 2;
                        flag = 1;
                    }
                    else{
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if(flag == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
