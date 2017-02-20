#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	cout<<s;
	for(long long int i=s.length()-1;i>=0;i--)
	{
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
