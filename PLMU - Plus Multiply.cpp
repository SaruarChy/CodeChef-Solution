#include <iostream>
using namespace std;

int main()
{
    int t;
	int countN,countO,sumN,sumO,i,posN,posO;
    long long int n,a[40005];
    cin>>t;
    while(t--)
    {
		countN=0,countO=0,sumN=0,sumO=0;
		cin>>n;
		for(i=0; i<n; i++)
			cin>>a[i];
		for(i=0; i<n; i++)
			if(a[i]==2)
			{
				posN=i;
				break;
			}
		for(i=0; i<n; i++)
			if(a[i]==0)
			{
				posO=i;
				break;
			}

		for(i=posN+1; i<n; i++)
		{
			if(a[i]==2)
				countN++;
		}
		for(i=posO+1; i<n; i++)
		{
			if(a[i]==0)
				countO++;
		}
		sumN=(countN*(countN+1))/2;
		sumO=(countO*(countO+1))/2;

		cout<<sumN+sumO<<endl;
	}
	return 0;
}
/*
2
3
2 4 2
3
0 2 3
*/
