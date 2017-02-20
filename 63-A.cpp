#include<iostream>
using namespace std;

int main()
{
	int n,i;
	string nm,st;
	cin>>n;
	string a[n][2];
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		
	}	
	for(i=0;i<n;i++)
	{
		if(a[i][1]=="rat")
			cout<<a[i][0]<<endl;
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]=="child" || a[i][1]=="woman")
			cout<<a[i][0]<<endl;		
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]=="man")
			cout<<a[i][0]<<endl;		
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1]=="captain")
			cout<<a[i][0]<<endl;		
	}
	return 0;
}
