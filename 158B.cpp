/*

B. Taxi
time limit per test3 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1?=?si?=?4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1?=?n?=?105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1,?s2,?...,?sn (1?=?si?=?4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
input
5
1 2 4 3 3
output
4
input
8
2 3 4 4 2 1 3 1
output
5

*/
#include<iostream>
using namespace std;
int main()
{
	int n,i,x,g1=0,g2=0,g3=0,g4=0,ans;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
			g1++;
		else if(x==2)
			g2++;
		else if(x==3)
			g3++;
		else if(x==4)
			g4++;
	}
	if(g3<g1)
	{
		g1=g1-g3;
	}
	else
	{
		g1=0;
	}
	if(g2%2==1)
	{
		if(g1>2)
		{
			g1=g1-2;
		}
		else
		{
			g1=0;
		}	
	}
	ans=g4+g3+(g2+1)/2+(g1+3)/4;
	cout<<ans<<endl;
	return 0;
}
