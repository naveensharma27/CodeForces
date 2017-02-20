#include<iostream>
using namespace std;


int main()
{
    int n,m,i,j,minI,minJ,maxI,maxJ;
    bool b;
    cin>>n>>m;
    string flag[n];
    minI=n-1;
    minJ=m-1;
    maxI=0;
    maxJ=0;
    
    for(i=0;i<n;i++)
    {
    	cin>>flag[i];
    }


	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(flag[i][j]=='*')
			{
				if(i<minI)
				{
					minI=i;
				}
				if(j<minJ)
				{
					minJ=j;
				}
				if(i>maxI)
				{
					maxI=i;
				}
				if(j>maxJ)
				{
					maxJ=j;
				}				
			}
		}
	}
	//cout<<minI<<" "<<maxI<<" "<<minJ<<" "<<maxJ<<endl;
	for(i=minI;i<=maxI;i++)
	{
		for(j=minJ;j<=maxJ;j++)
		{
			cout<<flag[i][j];
		}
		cout<<endl;
	}
    return 0;
}
