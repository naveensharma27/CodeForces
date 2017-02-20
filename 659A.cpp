#include<iostream>
using namespace std;

int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	if(b>0)
	{
		cout<<a + b%n<<endl;
	}
	else
	{
		cout<<(a+b)%n<<endl;
	}
	return 0;
}
