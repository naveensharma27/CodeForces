#include<iostream>
using namespace std;

bool check(int m , int s)
{
	if(s>0 && s<=m*9)
	{
		return true;
	}
	
	return false;
}

void findMax(int max[] , int m , int s)
{
	int i;
	int d9 = s/9;
	int rem = s%9;
	for(i = m;i>m-d9;i--)
	{
		max[i]=9;
	}
	max[i--]=rem;
	for(;i>0;i--)
	{
		max[i]=0;
	}
}

void findMin(int min[] , int m , int s)
{
	int i;
	int d9 = s/9;
	int rem =s%9;
	if(rem==0)
	{
		d9--;
		rem=9;
	}
		for(i =1;i<=d9;i++)
		{
			min[i]=9;
		}
		if(d9==m)
		{
			return;
		}
		else if(m-d9==1)
		{
			min[m]=rem;
			return;
		}
		else if(m-d9>1)
		{
			min[i]=rem-1;
			min[m]=1;
		}			

}

int main()
{
	int m,s;
	cin>>m>>s;
	int max[101]={0};
	int min[101]={0};
	
	if( (s == 0 && m > 1) && !check(m,s) )
	{
		cout<<"-1 -1"<<endl;
	}
	else if(s==0 && m==1)
	{
		cout<<"0 0"<<endl;
	}
	else
	{
		findMax(max , m , s);
		findMin(min , m , s);
		
		for(int i=m;i>0;i--)
		cout<<min[i];				
		cout<<" ";		
		for(int i=m;i>0;i--)
		cout<<max[i];

	}
	return 0;
}
