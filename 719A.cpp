/*

A. Vitya in the Countryside
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Every summer Vitya comes to visit his grandmother in the countryside. This summer, he got a huge wart. Every grandma knows that one should treat warts when the moon goes down. Thus, Vitya has to catch the moment when the moon is down.

Moon cycle lasts 30 days. The size of the visible part of the moon (in Vitya's units) for each day is 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, and then cycle repeats, thus after the second 1 again goes 0.

As there is no internet in the countryside, Vitya has been watching the moon for n consecutive days and for each of these days he wrote down the size of the visible part of the moon. Help him find out whether the moon will be up or down next day, or this cannot be determined by the data he has.

Input
The first line of the input contains a single integer n (1?=?n?=?92) � the number of consecutive days Vitya was watching the size of the visible part of the moon.

The second line contains n integers ai (0?=?ai?=?15) � Vitya's records.

It's guaranteed that the input data is consistent.

Output
If Vitya can be sure that the size of visible part of the moon on day n?+?1 will be less than the size of the visible part on day n, then print "DOWN" at the only line of the output. If he might be sure that the size of the visible part will increase, then print "UP". If it's impossible to determine what exactly will happen with the moon, print -1.

Examples
input
5
3 4 5 6 7
output
UP
input
7
12 13 14 15 14 13 12
output
DOWN
input
1
8
output
-1

*/



#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	int x;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1)
	{
		if(a[0]==0)
		cout<<"UP"<<endl;
		else if(a[0]==15)
		cout<<"DOWN"<<endl;
		else
		cout<<-1<<endl;
	}
		
	else
	{
		if(a[n-1]>a[n-2])
		{
			if(a[n-1]==15)
				cout<<"DOWN"<<endl;
			else
				cout<<"UP"<<endl;
		}
		else
		{
			if(a[n-1]==0)
				cout<<"UP"<<endl;
			else
				cout<<"DOWN"<<endl;			
		}
	}
	return 0;
}
