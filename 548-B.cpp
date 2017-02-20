#include<iostream>
using namespace std;

int n,m,q;
int a[501][501];
int sc[501];

int maxS(int i)
{
	int ans=0,j,curA=0;
	for(j=1;j<=m;j++)
	{
		if(a[i][j]==1)
		{
			curA++;
		}
		else
		{
			if(curA>ans)
				ans=curA;
			curA=0;
		}
	}
	if(curA>ans)
		ans=curA;
	return ans;
}

int maxA()
{
	int ans=0,i;
	for(i=1;i<=n;i++)
	{
		//cout<<sc[i]<<" "<<ans<<endl;
		if(sc[i]>ans)
			ans=sc[i];		
	}
	return ans;
}

int main()
{
	int x,y,i,j;
	sc[0]=0;
	cin>>n>>m>>q;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=1;i<=n;i++)
	{
		sc[i]=maxS(i);
		//cout<<sc[i]<<endl;
			
	}
	for(i=0;i<q;i++)
	{
		cin>>x>>y;
		a[x][y]=1-a[x][y];
		sc[x]=maxS(x);			
		cout<<maxA()<<endl;	
	}	
	return 0;
}
