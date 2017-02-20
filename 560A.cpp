/*
A. Currency System in Geraldion
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A magic island Geraldion, where Gerald lives, has its own currency system. It uses banknotes of several values. But the problem is, the system is not perfect and sometimes it happens that Geraldionians cannot express a certain sum of money with any set of banknotes. Of course, they can use any number of banknotes of each value. Such sum is called unfortunate. Gerald wondered: what is the minimum unfortunate sum?

Input
The first line contains number n (1?=?n?=?1000) � the number of values of the banknotes that used in Geraldion.

The second line contains n distinct space-separated numbers a1,?a2,?...,?an (1?=?ai?=?106) � the values of the banknotes.

Output
Print a single line � the minimum unfortunate sum. If there are no unfortunate sums, print ?-?1.

Examples
input
5
1 2 3 4 5
output
-1
*/
#include<iostream>
using namespace std;

int main()
{
	int n,x;
	bool flag=false;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if(x==1)
			flag=true;
	}
	if(flag)
		cout<<-1<<endl;
	else
		cout<<1<<endl;
	return 0;
}
