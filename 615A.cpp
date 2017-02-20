#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a,b,i,j;
	cin>>n>>m;
	bool arr[m+1];
	memset(arr,false,sizeof(arr));
	for(i=0;i<n;i++)
	{
		cin>>a;
		for(j=0;j<a;j++)
		{
			cin>>b;
			arr[b]=true;
		}
	}
	for(i=1;i<=m;i++)
	{
		if(!arr[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
