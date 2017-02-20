#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll m , c , in1 , in2 , ans=1;
	cin>>m>>c;
	cin>>in1;
	while(--m)
	{
		cin>>in2;
		if(in2-in1>c)
			ans=1;
		else
			ans++;
		in1=in2;
	}
	cout<<ans<<endl;
	return 0;
}
