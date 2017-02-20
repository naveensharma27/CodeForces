//Sieve
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,j,a,b;
	cin>>n>>k;
	
	bool sieve[n+1];
	
	memset(sieve,true,sizeof(sieve));
	sieve[0]=sieve[1]=false;
	
	for(i=2;i<=n;i++)
	{
		for(j=2;i*j<=n;j++)
		{
			sieve[i*j]=false;
		}
	}
	while(b<=n)
	{
		
	}
	
	
}
