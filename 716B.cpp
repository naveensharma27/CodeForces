#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	string s;
	int i,count=0,c=(int)'A',asc,temp=0;
	bool b[26];
	char z[26];
	memset(b,false,sizeof(b));
	cin>>s;
	if(s.length()<26)
	{
		cout<<-1<<endl;
	}
	else
	{
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='?')
			{
				count++;
			}
			else
			{
				asc=(int)s[i];
				b[asc-c]=true;
			}
		}
		for(i=0;i<26;i++)
		{
			if(!b[i])
			{
				z[temp++]=c+i;
			}
				
		}
		cout<<temp<<endl;
		if(temp==0)
		{
			if(count==0)
			{
				cout<<s<<endl;
			}
			else
			{
				for(i=0;i<s.length();i++)
				{
					if(s[i]=='?')
					{
						s[i]='A';
					}
				}
			}
			cout<<s<<endl;
		}
		else
		{
			if(temp<=count)
			{
				temp--;
				for(i=0;i<s.length();i++)
				{
					if(s[i]=='?'&& temp>0)
					{
						s[i]=z[temp--];
					}
					else if(s[i]=='?'&& temp==0)
					{
						s[i]=z[0];
					}
				}
				cout<<s<<endl;				
				
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	}
	cout<<count<<" "<<temp<<endl;
	return 0;
}
