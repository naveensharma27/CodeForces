#include<bits/stdc++.h>
using namespace std;
bool Tprime(long long int y)
{
	
	long long int x=sqrt(y);
	y=ceil(sqrt(x));
	if(x%2==0 && x!=2)
	{
		return false;
	}
	else if(x==2)
	{
		return true;
	}
	else
	{
		for(long long int i=3;i<=y;i+=2)
		{
			if(x%i==0)
				return false;
		}
	}
	return true;
}

bool Psquare(long long int x)
{
	if(x==1)
		return false;
	if(ceil(sqrt(x))-floor(sqrt(x))==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);
	long long int n,x,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(Psquare(x))
		{
			if(Tprime(x))
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
