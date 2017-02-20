#include<bits/stdc++.h>
using namespace std;

 int a;

 int calc( int i)
{
	 int sum=0,x=a;
	while(x!=0)
	{
		sum = sum + x%i;
		x=x/i;
		
	}
	return sum;
}

int gcd(int s, int a)
{
	while(s!=a)
	{
		if(s>a)
		{
			s-=a;
		}
		else
		{
			a-=s;
		}
	}
	return a;
}

int main()
{
	 int sum=0,i;
	cin>>a;
	
	for(i=2;i<a;i++)
	{
		sum+=calc(i);
	}
	a-=2;
	int x=gcd(sum,a);
	cout<<sum/x<<"/"<<a/x<<endl;
	return 0;
}
