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
    int t;
    cin>>t;
    while(t--){
        string s,p;
		cin>>s>>p;
		ll n = s.length();
		ll m = p.length();
		ll alpha[30],alpha2[30];;
        fill(alpha,alpha+30,0);

		for(int i=0; i<n; i++){
			alpha[s[i] - 'a']++;
		}
		for(int i=0; i<m; i++){
			alpha[p[i] - 'a']--;
		}

		for(int i=0; i<26; i++){
            alpha2[i] = alpha[i];
        }
        string str,str2;
		for(int i=0; i<=(p[0]-'a'); i++){
			while(alpha[i] > 0){
				str += (char)(i+97);
				alpha[i]--;
			}
		}
		str += p;
		for(int i=0; i<26; i++){
			while(alpha[i] > 0){
				str += (char)(i+97);
				alpha[i]--;
			}
		}

		for(int i=0; i<p[0]-'a'; i++)
		{
			while(alpha2[i] != 0 )
			{
				str2 += (char)(i+97);
				alpha2[i]--;
			}
		}
		str2 += p;
		for(int i=0; i<26; i++){
			while(alpha2[i] != 0){
				str2 += (char)(i+97);
				alpha2[i]--;
			}
		}
//		cout<<str<<endl;
//		cout<<str2<<endl;
		cout<<min(str,str2)<<endl;
    }
    return 0;
}
