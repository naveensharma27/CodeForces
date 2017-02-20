/*

A. Chewbacca and Number
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9?-?t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input
The first line contains a single integer x (1?=?x?=?1018) � the number that Luke Skywalker gave to Chewbacca.

Output
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Examples
input
27
output
22
input
4545
output
4444
*/

#include<iostream>
using namespace std;

int main()
{
	int i,asc0=(int)'0',asc9=(int)'9',t;
	string s;
	cin>>s;
	i=0;
	if(s[0]=='9')
		i=1;
	for(;i<s.length();i++)
	{
		t=(int)s[i];
		if(t-asc0>=5)
		{
			s[i]=asc9 + asc0 - t;
		}
	}
	cout<<s<<endl;
	return 0;
}
