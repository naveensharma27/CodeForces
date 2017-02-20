#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,i,a=0,asc1,asc2,x;
	string s,f;
	cin>>n>>s>>f;
	for(i=0;i<n;i++)
	{
		asc1=int(s[i]) -(int)'0';
		asc2=int(f[i]) -(int)'0';
		a += min(min(abs(asc1-asc2),(10 - asc2 + asc1)),(10 - asc1 + asc2));
	}
	cout<<a<<endl;
	return 0;
}

