#include<iostream>
using namespace std;

int main()
{
	int n,a,x;
	cin>>n>>a;
	a=a%((n*(n+1))/2);
	x=n;
	for(int i=1;i<=x;i++)
	{
		if(a-i>=0)
		{
			a=a-i;
		}
		else
		{
			break;
		}
	}
	cout<<a<<endl;
	return 0;
}
