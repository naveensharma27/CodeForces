#include<iostream>
using namespace std;

string s;
int m;
bool palin(int l)
{
	int x=l+m-1;
	while(l<x)
	{
		if(s[l]!=s[x])
		{
			return false;
		}
		l++;
		x--;
	}
	return true;
}
int main()
{
	int k,i,l;
	
	cin>>s>>k;
	l=s.length();
	m=l/k;
	if(l%k!=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else
	{
		l--;
		i=0;
		while(i<=l)
		{
			if(!palin(i))
			{
				cout<<"NO"<<endl;
				return 0;
			}
			i+=m;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
