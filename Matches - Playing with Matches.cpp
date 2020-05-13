#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,i,j;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int m=0;
        cin>>a>>b;
        c=a+b;
        string b=to_string(c);
        for(j=0; j<b.length(); j++)
        {
            if(b[j]=='0' || b[j]=='6' || b[j]=='9')
                m+=6;
            if(b[j]=='2' || b[j]=='3' || b[j]=='5')
                m+=5;
            if(b[j]=='1')
                m+=2;
            if(b[j]=='4')
                m+=4;
            if(b[j]=='7')
                m+=3;
            if(b[j]=='8')
                m+=7;
        }
        cout<<m<<endl;
    }
    return 0;
}
