#include<iostream>
using namespace std;

int main()
{
	long long int n,ans=1000000000000,q,i,j,m;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		q=15*a[i];
		for(j=0;j<a[i];j++)
		{
			cin>>m;
			q += 5*m;
			
		}
		if(q<ans)
		{
			ans=q;
		}
	}
	cout<<ans<<endl;
	return 0;
}
