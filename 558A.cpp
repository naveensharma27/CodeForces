#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	int hash[1000001]={0};
	int start[1000001]={0};
	int end[1000001]={0};

	int n,max=0,maxV=0,l,r,minL=10000000;
	int a[n+1];
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(start[a[i]]==0)
		{
			start[a[i]];
		}
		hash[a[i]]++;
		end[a[i]]=i;
	}
	for(int i=1;i<=1000000;i++)
	{
		if(hash[i]>=max && (end[i]-start[i])<minL)
		{
			max=hash[i];
			maxV=i;
			minL=end[i]-start[i];
		}
	}
	cout<<max<<" "<<maxV<<endl;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==maxV)
		{
			l=i;
			break;
		}
	}
	
	for(int i=n;i>=1;i--)
	{
		if(a[i]==maxV)
		{
			r=i;
			break;
		}
	}
	cout<<start[maxV]<<" "<<end[maxV]<<endl;
	return 0;
}
