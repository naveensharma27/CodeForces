#include<iostream>
using namespace std;

int n,m,i;

bool checkR(string flag[])
{
	for(int i=0;i<n;i++)
	{
		char c = flag[i][0];
		for(int j=1;j<m;j++)
		{
			if(flag[i][j] !=c)
			{
				return false;
			}
		}
	}
	return true;
}

bool checkC(string flag[])
{
	for(int i=1;i<n-1;i++)
	{
		if((flag[i][0] == flag[i-1][0]) || (flag[i][0] == flag[i+1][0]))
		{
			return false;
		}
	}
	return true;
}
int main()
{
    
    cin>>n>>m;
    string flag[n];
    for(i=0;i<n;i++)
    {
    	cin>>flag[i];
    }	
    
    if(checkC(flag) && checkR(flag))
    {
    	cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }
    
    return 0;
}
