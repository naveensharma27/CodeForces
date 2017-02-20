#include<iostream>
using namespace std;

int main()
{
	long long int n,i,x,o=0;
	cin>>n;
	if(n==1)
	{
		cin>>x;
		if(x==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			cin>>x;	
			if(x==0)
				o++;			
		}
		if(o==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}
